#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sm_logger.h"
#include <QThread>


QListWidget* g_logging_list;
QCheckBox* g_logging_enable;

#define TAG "main"

int32_t my_serial_write(const uint8_t* _data, int32_t _len, int32_t _timeout, void* _arg) {
    MainWindow* app = (MainWindow*)_arg;

    if(!app->m_isConnect)
        return -1;
    return app->m_socket->write((const char *)_data, _len);
}

int32_t my_serial_read(uint8_t* _buf, int32_t _len, int32_t _timeout, void* _arg) {
    MainWindow* app = (MainWindow*)_arg;

    if(!app->m_isConnect)
        return -1;

    WaitTimer timeout(_timeout);

    while(timeout.getRemainTime()){
        if(app->m_socket->bytesAvailable() >= _len){
            app->m_socket->read((char *)_buf, _len);
            for(int i = 0; i < _len; i++){
                qDebug() << QString::number(_buf[i], 16);
            }
            return _len;
        }
        QThread::msleep(10);
    }
    return -1;
}

void log_put(const char* _log) {
    qDebug() << _log;
    if(g_logging_list && g_logging_enable){
        if(g_logging_enable->isChecked()){
            g_logging_list->addItem(_log);
            g_logging_list->scrollToBottom();
        }
    }

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    g_logging_list = ui->listWidget_logging;
    g_logging_list->setWordWrap(true);
    g_logging_list->setTextElideMode(Qt::ElideNone);
    g_logging_enable = ui->checkBox_logging;
    sm_logger_init(log_put, LOG_LEVEL_DEBUG);

    connect(m_argent, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered, this, &MainWindow::onDevFound);
    connect(m_socket, &QBluetoothSocket::stateChanged, this, &MainWindow::on_socketStateChanged);
    connect(m_socket, &QBluetoothSocket::connected, this, &MainWindow::on_socketConnected);
    m_argent->start();

    m_mb_master = sm_mb_master_create(my_serial_write, my_serial_read, this);

    if(!m_mb_master)
        qDebug() << "create mb master failed";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDevFound(const QBluetoothDeviceInfo &dev){
    if(dev.name().contains(DEV_NAME)){
        LOG_INF(TAG,"Found Bluetooth device %s", dev.name().toStdString().c_str());
        m_devInfo.push_back(dev);
        ui->comboBox_devList->addItem(dev.name());
        ui->pushButton_ketNoi->setEnabled(true);
    }
}

void MainWindow::on_socketConnected(){
    LOG_INF(TAG, "Connected to device SUCCESS");
    m_isConnect = true;
    ui->pushButton_ketNoi->setText("Ngắt kết nối");
    ui->pushButton_ketNoi->setEnabled(true);
    m_socket->readAll();
}

void MainWindow::on_socketStateChanged(QBluetoothSocket::SocketState _state)
{
    switch (_state) {
    case QBluetoothSocket::SocketState::UnconnectedState:
        qDebug() <<"UnconnectedState";
        break;
    case QBluetoothSocket::SocketState::ServiceLookupState:
        qDebug() <<"ServiceLookupState";
        break;
    case QBluetoothSocket::SocketState::BoundState:
        qDebug() <<"BoundState";
        break;
    case QBluetoothSocket::SocketState::ClosingState:
        qDebug() <<"ClosingState";
        break;
    case QBluetoothSocket::SocketState::ConnectedState:
        qDebug() <<"ConnectedState";
        break;
    case QBluetoothSocket::SocketState::ConnectingState:
        qDebug() <<"ConnectingState";
        break;
    case QBluetoothSocket::SocketState::ListeningState:
        qDebug() <<"ListeningState";
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_lamMoiBL_clicked()
{
    m_socket->disconnectFromService();
    m_isConnect = false;
    ui->pushButton_ketNoi->setEnabled(true);
    ui->pushButton_ketNoi->setText("Kết nối");
}


void MainWindow::on_pushButton_ketNoi_clicked()
{
    if(!m_isConnect){
        for(auto item: m_devInfo){
            qDebug() << "item: " << item.name();
            if(item.name() == ui->comboBox_devList->currentText()){
                static const QString serviceUuid(QStringLiteral("00001101-0000-1000-8000-00805F9B34FB"));
                m_socket->connectToService(QBluetoothAddress(item.address()), QBluetoothUuid(serviceUuid), QIODevice::ReadWrite);
                ui->pushButton_ketNoi->setEnabled(false);
                LOG_INF(TAG, "Try connect to device %s", item.name().toStdString().c_str());
            }
        }
    }else{
        m_socket->disconnectFromService();
        m_isConnect = false;
        ui->pushButton_ketNoi->setText("Kết nối");
    }
}


void MainWindow::on_pushButton_test_clicked()
{
    if(m_isConnect){
        sm_sv_mb_master_write_single_reg(m_mb_master, 1, MB_HOLDING_REG_BLINK_LED_TEST, 0);
    }
}


void MainWindow::on_pushButton_ghiTimeTb_clicked()
{
    if(!m_isConnect)
        return;

    QTime currentTime = QTime::currentTime();
    uint16_t hour = currentTime.hour();
    uint16_t minute = currentTime.minute();
    uint16_t value = ((hour<<8) + minute);
    sm_sv_mb_master_write_single_reg(m_mb_master, 1, MB_HOLDING_REG_UPDATE_TIME, value);

}


void MainWindow::on_pushButton_khoaCua_clicked()
{

}


void MainWindow::on_pushButton_denNgu_clicked()
{

}


void MainWindow::on_pushButton_quatNgu_clicked()
{

}


void MainWindow::on_pushButton_denKhach_clicked()
{

}


void MainWindow::on_pushButton_denBep_clicked()
{

}


void MainWindow::on_pushButton_denHanhLang_clicked()
{

}


void MainWindow::on_pushButton_coiBaoChay_clicked()
{

}

