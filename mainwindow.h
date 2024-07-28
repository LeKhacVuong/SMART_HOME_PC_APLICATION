#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QTime>
#include "Timer.h"
#include "sm_mb_master_impl.h"
#include "mutex"


#define DEV_NAME "SMART HOME DEV"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    std::atomic <bool> m_isConnect = false;

    QBluetoothSocket *m_socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);



private slots:
    void on_pushButton_lamMoiBL_clicked();

    void onDevFound(const QBluetoothDeviceInfo &dev);

    void on_pushButton_ketNoi_clicked();

    void on_socketStateChanged(QBluetoothSocket::SocketState _state);

    void on_socketConnected();

    void on_pushButton_test_clicked();


    void on_pushButton_ghiTimeTb_clicked();

    void on_pushButton_khoaCua_clicked();

    void on_pushButton_denNgu_clicked();

    void on_pushButton_quatNgu_clicked();

    void on_pushButton_denKhach_clicked();

    void on_pushButton_denBep_clicked();

    void on_pushButton_denHanhLang_clicked();

    void on_pushButton_coiBaoChay_clicked();

private:
    Ui::MainWindow *ui;

    QBluetoothDeviceDiscoveryAgent *m_argent = new QBluetoothDeviceDiscoveryAgent;
    QVector <QBluetoothDeviceInfo> m_devInfo;


    sm_mb_master_t* m_mb_master;

    std::mutex m_lock;

};
#endif // MAINWINDOW_H
