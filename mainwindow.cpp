#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sm_logger.h"
#include "Timer.h"
#include <QThread>


QListWidget* g_logging_list;
QCheckBox* g_logging_enable;

#define TAG "main"


typedef struct ligh_dev_t{
    QTimeEdit* timeStart[3];
    QTimeEdit* timeStop[3];
    QPushButton* setTime[3];
}ligh_dev_t;

ligh_dev_t light_cf[LIGHT_NUMBER];

QLabel* g_light_auto[LIGHT_NUMBER];
QLabel* g_light_stt[LIGHT_NUMBER];
QPushButton* g_ligh_bt[LIGHT_NUMBER];
QPushButton* g_auto_bt[LIGHT_NUMBER];
QSlider* g_ligh_brg[LIGHT_NUMBER];

int32_t serialHostSendIfDefault(const uint8_t* _data, int32_t _len, int32_t _timeout, void* _arg){
    MainWindow* app = (MainWindow*)_arg;

    if(!app->m_isConnect)
        return -1;
    return app->m_socket->write((const char *)_data, _len);
}

int32_t serialHostRecvIfDefault(uint8_t *_buf, int32_t _len, int32_t _timeout, void* _arg) {
    MainWindow* app = (MainWindow*)_arg;

    if(!app->m_isConnect)
        return -1;

    WaitTimer timeout(_timeout);

    while(timeout.getRemainTime()){
        if((app->m_socket->bytesAvailable() >= _len)){
            QThread::msleep(10);
            app->m_socket->read((char *)_buf, _len);
            for(int i = 0; i < _len; i++){
                qDebug() << QString::number(_buf[i], 16);
            }
            return _len;
        }
    }
    return 0;
}

int32_t host_receive_cmd_callback(int32_t _cmd, const uint8_t* _data, int32_t _len, void* _arg ) {
    auto* app = (MainWindow*) _arg;
    if(_cmd == CMD_HOLDING_DEV_SEND_SYNC_DATA){
        // qDebug() << "Sync data form device size: " << QString::number(_len);
        memcpy(&app->m_devInfo, _data, sizeof(dev_info_t));
        app->updateDisplay();
    }
    return 0;
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

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::timerHandle);
    timer->setInterval(1);
    timer->start();

    connect(m_argent, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered, this, &MainWindow::onDevFound);
    connect(m_socket, &QBluetoothSocket::stateChanged, this, &MainWindow::on_socketStateChanged);
    connect(m_socket, &QBluetoothSocket::connected, this, &MainWindow::on_socketConnected);
    m_argent->start();

    m_host = sm_host_create(SM_HOST_ASYNC_MODE, 0x99, serialHostSendIfDefault, serialHostRecvIfDefault, this);
    sm_host_reg_handle(m_host, host_receive_cmd_callback, this);



    g_light_auto[BED_LIGHT] = ui->label_autoNgu;
    g_light_auto[LIVING_LIGHT] = ui->label_autoKhach;
    g_light_auto[HALLWAY_LIGHT] = ui->label_autoHl;
    g_light_auto[KITCHEN_LIGHT] = ui->label_autoBep;

    g_light_stt[BED_LIGHT] = ui->label_denNgu;
    g_light_stt[LIVING_LIGHT] = ui->label_denKhach;
    g_light_stt[HALLWAY_LIGHT] = ui->label_denHanhLang;
    g_light_stt[KITCHEN_LIGHT] = ui->label_denBep;

    g_ligh_bt[BED_LIGHT] = ui->pushButton_denNgu;
    g_ligh_bt[LIVING_LIGHT] = ui->pushButton_denKhach;
    g_ligh_bt[HALLWAY_LIGHT] = ui->pushButton_denHanhLang;
    g_ligh_bt[KITCHEN_LIGHT] = ui->pushButton_denBep;

    g_ligh_brg[BED_LIGHT] = ui->horizontalSlider_denNgu;
    g_ligh_brg[LIVING_LIGHT] = ui->horizontalSlider_denKhach;
    g_ligh_brg[HALLWAY_LIGHT] = ui->horizontalSlider_denHanhLang;
    g_ligh_brg[KITCHEN_LIGHT] = ui->horizontalSlider_denBep;

    g_auto_bt[BED_LIGHT] = ui->pushButton_autoNgu;
    g_auto_bt[LIVING_LIGHT] = ui->pushButton_autoKhach;
    g_auto_bt[HALLWAY_LIGHT] = ui->pushButton_autoHl;
    g_auto_bt[KITCHEN_LIGHT] = ui->pushButton_autoBep;

    for (int i = 0; i < 5; ++i) {
        connect(g_ligh_brg[i], &QSlider::sliderPressed, this, [this]() {
            m_isSliding = true;
        });
    }

    light_cf[KITCHEN_LIGHT].setTime[0] = ui->pushButton_timeBepConfig_1;
    light_cf[KITCHEN_LIGHT].setTime[1] = ui->pushButton_timeBepConfig_2;
    light_cf[KITCHEN_LIGHT].setTime[2] = ui->pushButton_timeBepConfig_3;

    light_cf[KITCHEN_LIGHT].timeStart[0] = ui->timeEdit_bep_1;
    light_cf[KITCHEN_LIGHT].timeStart[1] = ui->timeEdit_bep_2;
    light_cf[KITCHEN_LIGHT].timeStart[2] = ui->timeEdit_bep_3;

    light_cf[KITCHEN_LIGHT].timeStop[0] = ui->timeEdit_bep_11;
    light_cf[KITCHEN_LIGHT].timeStop[1] = ui->timeEdit_bep_22;
    light_cf[KITCHEN_LIGHT].timeStop[2] = ui->timeEdit_bep_33;


    light_cf[BED_LIGHT].setTime[0] = ui->pushButton_timeNguConfig_1;
    light_cf[BED_LIGHT].setTime[1] = ui->pushButton_timeNguConfig_2;
    light_cf[BED_LIGHT].setTime[2] = ui->pushButton_timeNguConfig_3;

    light_cf[BED_LIGHT].timeStart[0] = ui->timeEdit_ngu_1;
    light_cf[BED_LIGHT].timeStart[1] = ui->timeEdit_ngu_2;
    light_cf[BED_LIGHT].timeStart[2] = ui->timeEdit_ngu_3;

    light_cf[BED_LIGHT].timeStop[0] = ui->timeEdit_ngu_11;
    light_cf[BED_LIGHT].timeStop[1] = ui->timeEdit_ngu_22;
    light_cf[BED_LIGHT].timeStop[2] = ui->timeEdit_ngu_33;

    light_cf[LIVING_LIGHT].setTime[0] = ui->pushButton_timeKhachConfig_1;
    light_cf[LIVING_LIGHT].setTime[1] = ui->pushButton_timeKhachConfig_2;
    light_cf[LIVING_LIGHT].setTime[2] = ui->pushButton_timeKhachConfig_3;

    light_cf[LIVING_LIGHT].timeStart[0] = ui->timeEdit_khach_1;
    light_cf[LIVING_LIGHT].timeStart[1] = ui->timeEdit_khach_2;
    light_cf[LIVING_LIGHT].timeStart[2] = ui->timeEdit_khach_3;

    light_cf[LIVING_LIGHT].timeStop[0] = ui->timeEdit_khach_11;
    light_cf[LIVING_LIGHT].timeStop[1] = ui->timeEdit_khach_22;
    light_cf[LIVING_LIGHT].timeStop[2] = ui->timeEdit_khach_33;

    light_cf[HALLWAY_LIGHT].setTime[0] = ui->pushButton_timeHlConfig_1;
    light_cf[HALLWAY_LIGHT].setTime[1] = ui->pushButton_timeHlConfig_2;
    light_cf[HALLWAY_LIGHT].setTime[2] = ui->pushButton_timeHlConfig_3;

    light_cf[HALLWAY_LIGHT].timeStart[0] = ui->timeEdit_Hl_1;
    light_cf[HALLWAY_LIGHT].timeStart[1] = ui->timeEdit_Hl_2;
    light_cf[HALLWAY_LIGHT].timeStart[2] = ui->timeEdit_Hl_3;

    light_cf[HALLWAY_LIGHT].timeStop[0] = ui->timeEdit_Hl_11;
    light_cf[HALLWAY_LIGHT].timeStop[1] = ui->timeEdit_Hl_22;
    light_cf[HALLWAY_LIGHT].timeStop[2] = ui->timeEdit_Hl_33;


}

void MainWindow::updateDisplay(){
    char timeString[6];
    snprintf(timeString, sizeof(timeString), "%02d:%02d", m_devInfo.m_devTime.m_hour, m_devInfo.m_devTime.m_min);
    ui->label_timeTb->setText(timeString);

    if(m_devInfo.m_doorStt){
        ui->label_khoaCuaChinh->setText("Mở");
        ui->pushButton_khoaCua->setText("Đóng");
    }else{
        ui->label_khoaCuaChinh->setText("Đóng");
        ui->pushButton_khoaCua->setText("Mở");
    }

    for(int id = 0; id < LIGHT_NUMBER; id++){
        if(m_devInfo.m_light[id].m_stt){
            g_light_stt[id]->setText("Mở");
            g_ligh_bt[id]->setText("Đóng");
        }else{
            g_light_stt[id]->setText("Đóng");
            g_ligh_bt[id]->setText("Mở");
        }

        if(m_devInfo.m_light[id].m_auto){
            g_light_auto[id]->setText("Mở");
            g_auto_bt[id]->setText("Tắt");
            for(int i = 0; i < 3; i++){
                QTime Start(m_devInfo.m_light[id].m_autoConfigStart[i].m_hour, m_devInfo.m_light[id].m_autoConfigStart[i].m_min);
                light_cf[id].timeStart[i]->setTime(Start);
                QTime Stop(m_devInfo.m_light[id].m_autoConfigStop[i].m_hour, m_devInfo.m_light[id].m_autoConfigStop[i].m_min);
                light_cf[id].timeStart[i]->setTime(Stop);

                if(Start.hour() || Start.minute() || Stop.hour() || Stop.minute()){
                    light_cf[id].setTime[i]->setText("Xóa");
                }else{
                    light_cf[id].setTime[i]->setText("Cài");
                }
            }
        }else{
            g_light_auto[id]->setText("Tắt");
            g_auto_bt[id]->setText("Mở");

            for(int i = 0; i < 3; i++){
                QTime Start(0, 0);
                light_cf[id].timeStart[i]->setTime(Start);
                QTime Stop(0, 0);
                light_cf[id].timeStart[i]->setTime(Stop);
                light_cf[id].setTime[i]->setText("Cài");
            }

        }

        if(!m_isSliding){
            g_ligh_brg[id]->setValue(m_devInfo.m_light[id].m_brightness);
        }

    }

    if(m_devInfo.m_bedFan){
        ui->label_quatNgu->setText("Mở");
        ui->pushButton_quatNgu->setText("Đóng");
    }else{
        ui->label_quatNgu->setText("Đóng");
        ui->pushButton_quatNgu->setText("Mở");
    }

    if(m_devInfo.m_fireBuzzer){
        ui->label_coiBaoChay->setText("Mở");
        ui->pushButton_coiBaoChay->setText("Đóng");
    }else{
        ui->label_coiBaoChay->setText("Đóng");
        ui->pushButton_coiBaoChay->setText("Mở");
    }

    ui->label_doAm->setText(QString::number(m_devInfo.m_humidity));
    ui->label_nhietDo->setText(QString::number(m_devInfo.m_temperature));
    ui->label_camBienKhoi->setText(m_devInfo.m_smokeSensor? "Có khói" : "Không");
    ui->label_camBienLua->setText(m_devInfo.m_smokeSensor? "Có khói" : "Không");

    ui->checkBox_nhanDangNguoiHl->setChecked(m_devInfo.m_hallwayDetectHuman);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDevFound(const QBluetoothDeviceInfo &dev){
    if(dev.name().contains(DEV_NAME)){
        LOG_INF(TAG,"Found Bluetooth device %s", dev.name().toStdString().c_str());
        m_bluetoothDev.push_back(dev);
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

void MainWindow::timerHandle(){
    if(!m_isConnect)
        return;


    char buf[256] = {0, };
    int len = m_socket->read(buf, 256);
    if(len > 0){
        sm_host_asyn_feed((const uint8_t*)buf, len, m_host);
    }

    sm_host_process(m_host);
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
        for(auto item: m_bluetoothDev){
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
        sm_host_send_cmd(m_host, CMD_HOLDING_BLINK_LED_TEST, nullptr, 0);
    }
}


void MainWindow::on_pushButton_ghiTimeTb_clicked()
{
    if(!m_isConnect)
        return;

    QTime currentTime = QTime::currentTime();
    uint8_t hour = currentTime.hour();
    uint8_t minute = currentTime.minute();
    uint8_t data[2] = {minute, hour};

    sm_host_send_cmd(m_host, CMD_HOLDING_UPDATE_TIME, data, 2);

}


void MainWindow::on_pushButton_khoaCua_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_doorStt;
    sm_host_send_cmd(m_host, CMD_HOLDING_OPEN_DOOR, &data, 1);
}


void MainWindow::on_pushButton_denNgu_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_light[BED_LIGHT].m_stt;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_LIGHT_BED, &data, 1);
}


void MainWindow::on_pushButton_quatNgu_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_bedFan;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_FAN_BED, &data, 1);
}


void MainWindow::on_pushButton_denKhach_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_light[LIVING_LIGHT].m_stt;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_LIGHT_LIVING, &data, 1);
}


void MainWindow::on_pushButton_denBep_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_light[KITCHEN_LIGHT].m_stt;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_LIGHT_KITCHEN, &data, 1);
}


void MainWindow::on_pushButton_denHanhLang_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_light[HALLWAY_LIGHT].m_stt;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_LIGHT_HALLWAY, &data, 1);
}


void MainWindow::on_pushButton_coiBaoChay_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_fireBuzzer;
    sm_host_send_cmd(m_host, CMD_HOLDING_CONTROL_FIRE_BUZZER, &data, 1);
}




void MainWindow::on_checkBox_nhanDangNguoiHl_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data = !m_devInfo.m_hallwayDetectHuman;
    sm_host_send_cmd(m_host, CMD_HOLDING_HALLWAY_HUMAN_DETECT, &data, 1);
}


void MainWindow::on_pushButton_autoKhach_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data[2];
    data[0] = LIVING_LIGHT;
    data[1] = !m_devInfo.m_light[LIVING_LIGHT].m_auto;
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_AUTO_LIGHT, data, 2);
}


void MainWindow::on_pushButton_autoNgu_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data[2];
    data[0] = BED_LIGHT;
    data[1] = !m_devInfo.m_light[BED_LIGHT].m_auto;
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_AUTO_LIGHT, data, 2);
}


void MainWindow::on_pushButton_autoBep_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data[2];
    data[0] = KITCHEN_LIGHT;
    data[1] = !m_devInfo.m_light[BED_LIGHT].m_auto;
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_AUTO_LIGHT, data, 2);
}


void MainWindow::on_pushButton_autoHl_clicked()
{
    if(!m_isConnect)
        return;

    uint8_t data[2];
    data[0] = HALLWAY_LIGHT;
    data[1] = !m_devInfo.m_light[HALLWAY_LIGHT].m_auto;
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_AUTO_LIGHT, data, 2);
}


void MainWindow::on_horizontalSlider_denKhach_sliderReleased()
{
    if(!m_isConnect)
        return;

    uint8_t data = ui->horizontalSlider_denKhach->value();
    ui->horizontalSlider_denKhach->setValue(data);
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_LIVING_BRIGHTNESS, &data, 1);
}

void MainWindow::on_horizontalSlider_denNgu_sliderReleased()
{
    if(!m_isConnect)
        return;

    uint8_t data = ui->horizontalSlider_denNgu->value();
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_BED_BRIGHTNESS, &data, 1);
}


void MainWindow::on_horizontalSlider_denBep_sliderReleased()
{
    if(!m_isConnect)
        return;

    uint8_t data = ui->horizontalSlider_denBep->value();
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_KITCHEN_BRIGHTNESS, &data, 1);
}


void MainWindow::on_horizontalSlider_denHanhLang_sliderReleased()
{
    if(!m_isConnect)
        return;

    uint8_t data = ui->horizontalSlider_denHanhLang->value();
    sm_host_send_cmd(m_host, CMD_HOLDING_SET_HALLWAY_BRIGHTNESS, &data, 1);
}

