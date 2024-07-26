#ifndef SMARTHOME_H
#define SMARTHOME_H

#include <QMainWindow>
#include "QTimeEdit"
#include "QDebug"
#include <QVBoxLayout>
#include <QLabel>
#include <QCoreApplication>
#include <QSerialPortInfo>


QT_BEGIN_NAMESPACE
namespace Ui { class SmartHome; }
QT_END_NAMESPACE

class SmartHome : public QMainWindow
{
    Q_OBJECT

public:
    SmartHome(QWidget *parent = nullptr);
    ~SmartHome();

private slots:
    void on_pushButton_themAutoQuat_clicked();

    void on_pushButton_lamMoiCom_clicked();

private:
    Ui::SmartHome *ui;

    QTimeEdit *startTimeEdit;
    QTimeEdit *endTimeEdit;
};
#endif // SMARTHOME_H
