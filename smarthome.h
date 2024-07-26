#ifndef SMARTHOME_H
#define SMARTHOME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SmartHome; }
QT_END_NAMESPACE

class SmartHome : public QMainWindow
{
    Q_OBJECT

public:
    SmartHome(QWidget *parent = nullptr);
    ~SmartHome();

private:
    Ui::SmartHome *ui;
};
#endif // SMARTHOME_H
