#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothSocket>
#include <QTime>
#include <atomic>
#include "mutex"
#include <QTimer>
#include "sm_host.h"

#define DEV_NAME "SMART HOME DEV"

enum LIGHT{
    BED_LIGHT,
    LIVING_LIGHT,
    KITCHEN_LIGHT,
    HALLWAY_LIGHT,
    LIGHT_NUMBER
};

typedef struct devTime_t{
    uint8_t m_hour;
    uint8_t m_min;
}devTime_t;

typedef struct light_info_t{
    uint8_t m_stt;
    uint8_t m_brightness;
    uint8_t m_auto;
    devTime_t m_autoConfigStart[3];
    devTime_t m_autoConfigStop[3];
}light_info_t;

typedef struct dev_info_t{
    devTime_t m_devTime;

    uint8_t m_doorStt;
    uint8_t m_bedFan;
    uint8_t m_humidity;
    uint8_t m_temperature;
    uint8_t m_fireSensor;
    uint8_t m_smokeSensor;
    uint8_t m_fireBuzzer;
    uint8_t m_hallwayDetectHuman;

    light_info_t m_light[LIGHT_NUMBER];
}dev_info_t;

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

    dev_info_t m_devInfo;

    void updateDisplay();

private slots:
    void timerHandle();

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

    void on_checkBox_nhanDangNguoiHl_stateChanged(int arg1){}

    void on_checkBox_nhanDangNguoiHl_clicked();

    void on_pushButton_autoKhach_clicked();

    void on_pushButton_autoNgu_clicked();

    void on_pushButton_autoBep_clicked();

    void on_pushButton_autoHl_clicked();

    void on_horizontalSlider_denKhach_sliderReleased();

    void on_horizontalSlider_denNgu_sliderReleased();

    void on_horizontalSlider_denBep_sliderReleased();

    void on_horizontalSlider_denHanhLang_sliderReleased();

private:
    Ui::MainWindow *ui;

    QBluetoothDeviceDiscoveryAgent *m_argent = new QBluetoothDeviceDiscoveryAgent;
    QVector <QBluetoothDeviceInfo> m_bluetoothDev;

    std::mutex m_lock;

    sm_host_t* m_host;

    std::atomic <bool> m_isSliding = false;

};
#endif // MAINWINDOW_H
