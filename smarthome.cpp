#include "smarthome.h"
#include "ui_smarthome.h"

SmartHome::SmartHome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartHome)
{
    ui->setupUi(this);

    ui->comboBox_danhSachCom->clear();
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : serialPortInfos) {
        if(info.description().contains("USB")){
            ui->comboBox_danhSachCom->addItem(info.portName() + ": " + " " + info.description());
        }
    }
}

SmartHome::~SmartHome()
{
    delete ui;
}


void SmartHome::on_pushButton_lamMoiCom_clicked()
{
    ui->comboBox_danhSachCom->clear();
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : serialPortInfos) {
        if(info.description().contains("USB")){
            ui->comboBox_danhSachCom->addItem(info.portName() + ": " + " " + info.description());
        }
    }
}

void SmartHome::on_pushButton_themAutoQuat_clicked()
{
    startTimeEdit->show();
    endTimeEdit->show();
}



