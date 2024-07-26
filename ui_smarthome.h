/********************************************************************************
** Form generated from reading UI file 'smarthome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTHOME_H
#define UI_SMARTHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartHome
{
public:
    QAction *actionTh_ng_s_ho_t_ng;
    QAction *actionPhi_n_b_n_ph_n_m_m;
    QWidget *centralwidget;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_auto_setting;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_autoQuat;
    QLabel *label_lock_stt_text_7;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_themAutoQuat;
    QTimeEdit *timeEdit_autoQuatStart;
    QLabel *label_2;
    QTimeEdit *timeEdit_autoQuatStop;
    QPushButton *pushButton_xoaAutoQuat;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_autoDenHanhLang;
    QLabel *label_lock_stt_text_8;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_themAutoDenHanhLang;
    QTimeEdit *timeEdit_autoDenHanhLangStart;
    QLabel *label;
    QTimeEdit *timeEdit_autoDenHanhLangStop;
    QPushButton *pushButton_xoaAutoDenHL;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *checkBox_autoDenKhach;
    QLabel *label_lock_stt_text_14;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *pushButton_themDenKhach;
    QTimeEdit *timeEdit_autoDenKhachStart;
    QLabel *label_6;
    QTimeEdit *timeEdit_autoDenKhachStop;
    QPushButton *pushButton_xoaAutoDenKhach;
    QListWidget *listWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox;
    QLabel *label_lock_stt_text_5;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton_themDenNgu;
    QTimeEdit *timeEdit_autoDenNguStart;
    QLabel *label_3;
    QTimeEdit *timeEdit_autoDenNguStop;
    QPushButton *pushButton_xoaAutoDenNgu;
    QListWidget *listWidget_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_danhSachCom;
    QPushButton *pushButton_lamMoiCom;
    QPushButton *pushButton_ketNoi;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_dev_sn_text;
    QLabel *label_maThietBi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_dev_stt_text;
    QLabel *label_trangThai;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_lock_stt_text;
    QLabel *label_khoaCuaChinh;
    QPushButton *pushButton_khoaCua;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_lock_stt_text_9;
    QLabel *label_denNgu;
    QPushButton *pushButton_denNgu;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_lock_stt_text_11;
    QLabel *label_quatNgu;
    QPushButton *pushButton_quatNgu;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_lock_stt_text_12;
    QLabel *label_denKhach;
    QPushButton *pushButton_denKhach;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_lock_stt_text_13;
    QLabel *label_quatKhach;
    QPushButton *pushButton_quatKhach;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_lock_stt_text_10;
    QLabel *label_denHanhLang;
    QPushButton *pushButton_denHanhLang;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_lock_stt_text_15;
    QLabel *label_timeTb;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *pushButton_docTimeTb;
    QPushButton *pushButton_ghiTimeTb;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_lock_stt_text_2;
    QLabel *label_doAm;
    QPushButton *pushButton_denHanhLang_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_lock_stt_text_3;
    QLabel *label_nhietDo;
    QPushButton *pushButton_denHanhLang_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_lock_stt_text_4;
    QLabel *label_khiGas;
    QPushButton *pushButton_denHanhLang_4;
    QLabel *label_logging;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_7;
    QCheckBox *checkBox_3;
    QMenuBar *menubar;
    QMenu *menuSetting;
    QMenu *menuTh_ng_tin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartHome)
    {
        if (SmartHome->objectName().isEmpty())
            SmartHome->setObjectName(QString::fromUtf8("SmartHome"));
        SmartHome->setEnabled(true);
        SmartHome->resize(1006, 619);
        SmartHome->setMaximumSize(QSize(16777215, 16777215));
        SmartHome->setAutoFillBackground(false);
        actionTh_ng_s_ho_t_ng = new QAction(SmartHome);
        actionTh_ng_s_ho_t_ng->setObjectName(QString::fromUtf8("actionTh_ng_s_ho_t_ng"));
        actionPhi_n_b_n_ph_n_m_m = new QAction(SmartHome);
        actionPhi_n_b_n_ph_n_m_m->setObjectName(QString::fromUtf8("actionPhi_n_b_n_ph_n_m_m"));
        centralwidget = new QWidget(SmartHome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(750, 240, 47, 13));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 310, 971, 271));
        horizontalLayout_auto_setting = new QHBoxLayout(layoutWidget);
        horizontalLayout_auto_setting->setObjectName(QString::fromUtf8("horizontalLayout_auto_setting"));
        horizontalLayout_auto_setting->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBox_autoQuat = new QCheckBox(layoutWidget);
        checkBox_autoQuat->setObjectName(QString::fromUtf8("checkBox_autoQuat"));
        checkBox_autoQuat->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_10->addWidget(checkBox_autoQuat);

        label_lock_stt_text_7 = new QLabel(layoutWidget);
        label_lock_stt_text_7->setObjectName(QString::fromUtf8("label_lock_stt_text_7"));
        label_lock_stt_text_7->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_lock_stt_text_7->setFont(font);
        label_lock_stt_text_7->setFrameShape(QFrame::NoFrame);

        horizontalLayout_10->addWidget(label_lock_stt_text_7);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        pushButton_themAutoQuat = new QPushButton(layoutWidget);
        pushButton_themAutoQuat->setObjectName(QString::fromUtf8("pushButton_themAutoQuat"));
        pushButton_themAutoQuat->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_17->addWidget(pushButton_themAutoQuat);

        timeEdit_autoQuatStart = new QTimeEdit(layoutWidget);
        timeEdit_autoQuatStart->setObjectName(QString::fromUtf8("timeEdit_autoQuatStart"));

        horizontalLayout_17->addWidget(timeEdit_autoQuatStart);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_17->addWidget(label_2);

        timeEdit_autoQuatStop = new QTimeEdit(layoutWidget);
        timeEdit_autoQuatStop->setObjectName(QString::fromUtf8("timeEdit_autoQuatStop"));

        horizontalLayout_17->addWidget(timeEdit_autoQuatStop);


        verticalLayout_4->addLayout(horizontalLayout_17);

        pushButton_xoaAutoQuat = new QPushButton(layoutWidget);
        pushButton_xoaAutoQuat->setObjectName(QString::fromUtf8("pushButton_xoaAutoQuat"));

        verticalLayout_4->addWidget(pushButton_xoaAutoQuat);

        listWidget_2 = new QListWidget(layoutWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout_4->addWidget(listWidget_2);


        horizontalLayout_auto_setting->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBox_autoDenHanhLang = new QCheckBox(layoutWidget);
        checkBox_autoDenHanhLang->setObjectName(QString::fromUtf8("checkBox_autoDenHanhLang"));
        checkBox_autoDenHanhLang->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_13->addWidget(checkBox_autoDenHanhLang);

        label_lock_stt_text_8 = new QLabel(layoutWidget);
        label_lock_stt_text_8->setObjectName(QString::fromUtf8("label_lock_stt_text_8"));
        label_lock_stt_text_8->setMaximumSize(QSize(200, 16777215));
        label_lock_stt_text_8->setFont(font);
        label_lock_stt_text_8->setFrameShape(QFrame::NoFrame);

        horizontalLayout_13->addWidget(label_lock_stt_text_8);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_themAutoDenHanhLang = new QPushButton(layoutWidget);
        pushButton_themAutoDenHanhLang->setObjectName(QString::fromUtf8("pushButton_themAutoDenHanhLang"));
        pushButton_themAutoDenHanhLang->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(pushButton_themAutoDenHanhLang);

        timeEdit_autoDenHanhLangStart = new QTimeEdit(layoutWidget);
        timeEdit_autoDenHanhLangStart->setObjectName(QString::fromUtf8("timeEdit_autoDenHanhLangStart"));

        horizontalLayout_11->addWidget(timeEdit_autoDenHanhLangStart);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_11->addWidget(label);

        timeEdit_autoDenHanhLangStop = new QTimeEdit(layoutWidget);
        timeEdit_autoDenHanhLangStop->setObjectName(QString::fromUtf8("timeEdit_autoDenHanhLangStop"));

        horizontalLayout_11->addWidget(timeEdit_autoDenHanhLangStop);


        verticalLayout_3->addLayout(horizontalLayout_11);

        pushButton_xoaAutoDenHL = new QPushButton(layoutWidget);
        pushButton_xoaAutoDenHL->setObjectName(QString::fromUtf8("pushButton_xoaAutoDenHL"));

        verticalLayout_3->addWidget(pushButton_xoaAutoDenHL);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_auto_setting->addLayout(verticalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        checkBox_autoDenKhach = new QCheckBox(layoutWidget);
        checkBox_autoDenKhach->setObjectName(QString::fromUtf8("checkBox_autoDenKhach"));
        checkBox_autoDenKhach->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_21->addWidget(checkBox_autoDenKhach);

        label_lock_stt_text_14 = new QLabel(layoutWidget);
        label_lock_stt_text_14->setObjectName(QString::fromUtf8("label_lock_stt_text_14"));
        label_lock_stt_text_14->setMaximumSize(QSize(200, 16777215));
        label_lock_stt_text_14->setFont(font);
        label_lock_stt_text_14->setFrameShape(QFrame::NoFrame);

        horizontalLayout_21->addWidget(label_lock_stt_text_14);


        verticalLayout_10->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        pushButton_themDenKhach = new QPushButton(layoutWidget);
        pushButton_themDenKhach->setObjectName(QString::fromUtf8("pushButton_themDenKhach"));
        pushButton_themDenKhach->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_22->addWidget(pushButton_themDenKhach);

        timeEdit_autoDenKhachStart = new QTimeEdit(layoutWidget);
        timeEdit_autoDenKhachStart->setObjectName(QString::fromUtf8("timeEdit_autoDenKhachStart"));

        horizontalLayout_22->addWidget(timeEdit_autoDenKhachStart);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_22->addWidget(label_6);

        timeEdit_autoDenKhachStop = new QTimeEdit(layoutWidget);
        timeEdit_autoDenKhachStop->setObjectName(QString::fromUtf8("timeEdit_autoDenKhachStop"));

        horizontalLayout_22->addWidget(timeEdit_autoDenKhachStop);


        verticalLayout_10->addLayout(horizontalLayout_22);

        pushButton_xoaAutoDenKhach = new QPushButton(layoutWidget);
        pushButton_xoaAutoDenKhach->setObjectName(QString::fromUtf8("pushButton_xoaAutoDenKhach"));

        verticalLayout_10->addWidget(pushButton_xoaAutoDenKhach);

        listWidget_5 = new QListWidget(layoutWidget);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));

        verticalLayout_10->addWidget(listWidget_5);


        horizontalLayout_auto_setting->addLayout(verticalLayout_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(checkBox);

        label_lock_stt_text_5 = new QLabel(layoutWidget);
        label_lock_stt_text_5->setObjectName(QString::fromUtf8("label_lock_stt_text_5"));
        label_lock_stt_text_5->setMaximumSize(QSize(200, 16777215));
        label_lock_stt_text_5->setFont(font);
        label_lock_stt_text_5->setFrameShape(QFrame::NoFrame);

        horizontalLayout_8->addWidget(label_lock_stt_text_5);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        pushButton_themDenNgu = new QPushButton(layoutWidget);
        pushButton_themDenNgu->setObjectName(QString::fromUtf8("pushButton_themDenNgu"));
        pushButton_themDenNgu->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_18->addWidget(pushButton_themDenNgu);

        timeEdit_autoDenNguStart = new QTimeEdit(layoutWidget);
        timeEdit_autoDenNguStart->setObjectName(QString::fromUtf8("timeEdit_autoDenNguStart"));

        horizontalLayout_18->addWidget(timeEdit_autoDenNguStart);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_18->addWidget(label_3);

        timeEdit_autoDenNguStop = new QTimeEdit(layoutWidget);
        timeEdit_autoDenNguStop->setObjectName(QString::fromUtf8("timeEdit_autoDenNguStop"));

        horizontalLayout_18->addWidget(timeEdit_autoDenNguStop);


        verticalLayout_5->addLayout(horizontalLayout_18);

        pushButton_xoaAutoDenNgu = new QPushButton(layoutWidget);
        pushButton_xoaAutoDenNgu->setObjectName(QString::fromUtf8("pushButton_xoaAutoDenNgu"));

        verticalLayout_5->addWidget(pushButton_xoaAutoDenNgu);

        listWidget_3 = new QListWidget(layoutWidget);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        verticalLayout_5->addWidget(listWidget_3);


        horizontalLayout_auto_setting->addLayout(verticalLayout_5);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 411, 111));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_danhSachCom = new QComboBox(layoutWidget1);
        comboBox_danhSachCom->setObjectName(QString::fromUtf8("comboBox_danhSachCom"));
        comboBox_danhSachCom->setEnabled(true);
        comboBox_danhSachCom->setEditable(false);

        horizontalLayout->addWidget(comboBox_danhSachCom);

        pushButton_lamMoiCom = new QPushButton(layoutWidget1);
        pushButton_lamMoiCom->setObjectName(QString::fromUtf8("pushButton_lamMoiCom"));
        pushButton_lamMoiCom->setMaximumSize(QSize(50, 25));

        horizontalLayout->addWidget(pushButton_lamMoiCom);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_ketNoi = new QPushButton(layoutWidget1);
        pushButton_ketNoi->setObjectName(QString::fromUtf8("pushButton_ketNoi"));
        QFont font1;
        font1.setPointSize(10);
        pushButton_ketNoi->setFont(font1);

        verticalLayout->addWidget(pushButton_ketNoi);


        verticalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_dev_sn_text = new QLabel(layoutWidget1);
        label_dev_sn_text->setObjectName(QString::fromUtf8("label_dev_sn_text"));
        label_dev_sn_text->setFont(font);
        label_dev_sn_text->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(label_dev_sn_text);

        label_maThietBi = new QLabel(layoutWidget1);
        label_maThietBi->setObjectName(QString::fromUtf8("label_maThietBi"));
        label_maThietBi->setMaximumSize(QSize(200, 35));
        label_maThietBi->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(label_maThietBi);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_dev_stt_text = new QLabel(layoutWidget1);
        label_dev_stt_text->setObjectName(QString::fromUtf8("label_dev_stt_text"));
        label_dev_stt_text->setFont(font);
        label_dev_stt_text->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_dev_stt_text);

        label_trangThai = new QLabel(layoutWidget1);
        label_trangThai->setObjectName(QString::fromUtf8("label_trangThai"));
        label_trangThai->setMaximumSize(QSize(200, 35));
        label_trangThai->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(label_trangThai);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(430, 10, 551, 288));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_lock_stt_text = new QLabel(layoutWidget2);
        label_lock_stt_text->setObjectName(QString::fromUtf8("label_lock_stt_text"));
        label_lock_stt_text->setFont(font);
        label_lock_stt_text->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(label_lock_stt_text);

        label_khoaCuaChinh = new QLabel(layoutWidget2);
        label_khoaCuaChinh->setObjectName(QString::fromUtf8("label_khoaCuaChinh"));
        label_khoaCuaChinh->setMaximumSize(QSize(250, 16777215));
        label_khoaCuaChinh->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(label_khoaCuaChinh);

        pushButton_khoaCua = new QPushButton(layoutWidget2);
        pushButton_khoaCua->setObjectName(QString::fromUtf8("pushButton_khoaCua"));

        horizontalLayout_4->addWidget(pushButton_khoaCua);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_lock_stt_text_9 = new QLabel(layoutWidget2);
        label_lock_stt_text_9->setObjectName(QString::fromUtf8("label_lock_stt_text_9"));
        label_lock_stt_text_9->setFont(font);
        label_lock_stt_text_9->setFrameShape(QFrame::NoFrame);

        horizontalLayout_9->addWidget(label_lock_stt_text_9);

        label_denNgu = new QLabel(layoutWidget2);
        label_denNgu->setObjectName(QString::fromUtf8("label_denNgu"));
        label_denNgu->setMaximumSize(QSize(250, 16777215));
        label_denNgu->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(label_denNgu);

        pushButton_denNgu = new QPushButton(layoutWidget2);
        pushButton_denNgu->setObjectName(QString::fromUtf8("pushButton_denNgu"));

        horizontalLayout_9->addWidget(pushButton_denNgu);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_lock_stt_text_11 = new QLabel(layoutWidget2);
        label_lock_stt_text_11->setObjectName(QString::fromUtf8("label_lock_stt_text_11"));
        label_lock_stt_text_11->setFont(font);
        label_lock_stt_text_11->setFrameShape(QFrame::NoFrame);

        horizontalLayout_14->addWidget(label_lock_stt_text_11);

        label_quatNgu = new QLabel(layoutWidget2);
        label_quatNgu->setObjectName(QString::fromUtf8("label_quatNgu"));
        label_quatNgu->setMaximumSize(QSize(250, 16777215));
        label_quatNgu->setFrameShape(QFrame::Box);

        horizontalLayout_14->addWidget(label_quatNgu);

        pushButton_quatNgu = new QPushButton(layoutWidget2);
        pushButton_quatNgu->setObjectName(QString::fromUtf8("pushButton_quatNgu"));

        horizontalLayout_14->addWidget(pushButton_quatNgu);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_lock_stt_text_12 = new QLabel(layoutWidget2);
        label_lock_stt_text_12->setObjectName(QString::fromUtf8("label_lock_stt_text_12"));
        label_lock_stt_text_12->setFont(font);
        label_lock_stt_text_12->setFrameShape(QFrame::NoFrame);

        horizontalLayout_15->addWidget(label_lock_stt_text_12);

        label_denKhach = new QLabel(layoutWidget2);
        label_denKhach->setObjectName(QString::fromUtf8("label_denKhach"));
        label_denKhach->setMaximumSize(QSize(250, 16777215));
        label_denKhach->setFrameShape(QFrame::Box);

        horizontalLayout_15->addWidget(label_denKhach);

        pushButton_denKhach = new QPushButton(layoutWidget2);
        pushButton_denKhach->setObjectName(QString::fromUtf8("pushButton_denKhach"));

        horizontalLayout_15->addWidget(pushButton_denKhach);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_lock_stt_text_13 = new QLabel(layoutWidget2);
        label_lock_stt_text_13->setObjectName(QString::fromUtf8("label_lock_stt_text_13"));
        label_lock_stt_text_13->setFont(font);
        label_lock_stt_text_13->setFrameShape(QFrame::NoFrame);

        horizontalLayout_16->addWidget(label_lock_stt_text_13);

        label_quatKhach = new QLabel(layoutWidget2);
        label_quatKhach->setObjectName(QString::fromUtf8("label_quatKhach"));
        label_quatKhach->setMaximumSize(QSize(250, 16777215));
        label_quatKhach->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(label_quatKhach);

        pushButton_quatKhach = new QPushButton(layoutWidget2);
        pushButton_quatKhach->setObjectName(QString::fromUtf8("pushButton_quatKhach"));

        horizontalLayout_16->addWidget(pushButton_quatKhach);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_lock_stt_text_10 = new QLabel(layoutWidget2);
        label_lock_stt_text_10->setObjectName(QString::fromUtf8("label_lock_stt_text_10"));
        label_lock_stt_text_10->setFont(font);
        label_lock_stt_text_10->setFrameShape(QFrame::NoFrame);

        horizontalLayout_12->addWidget(label_lock_stt_text_10);

        label_denHanhLang = new QLabel(layoutWidget2);
        label_denHanhLang->setObjectName(QString::fromUtf8("label_denHanhLang"));
        label_denHanhLang->setMaximumSize(QSize(250, 16777215));
        label_denHanhLang->setFrameShape(QFrame::Box);

        horizontalLayout_12->addWidget(label_denHanhLang);

        pushButton_denHanhLang = new QPushButton(layoutWidget2);
        pushButton_denHanhLang->setObjectName(QString::fromUtf8("pushButton_denHanhLang"));

        horizontalLayout_12->addWidget(pushButton_denHanhLang);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_lock_stt_text_15 = new QLabel(layoutWidget2);
        label_lock_stt_text_15->setObjectName(QString::fromUtf8("label_lock_stt_text_15"));
        label_lock_stt_text_15->setFont(font);
        label_lock_stt_text_15->setFrameShape(QFrame::NoFrame);

        horizontalLayout_23->addWidget(label_lock_stt_text_15);

        label_timeTb = new QLabel(layoutWidget2);
        label_timeTb->setObjectName(QString::fromUtf8("label_timeTb"));
        label_timeTb->setMaximumSize(QSize(250, 16777215));
        label_timeTb->setFrameShape(QFrame::Box);

        horizontalLayout_23->addWidget(label_timeTb);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        pushButton_docTimeTb = new QPushButton(layoutWidget2);
        pushButton_docTimeTb->setObjectName(QString::fromUtf8("pushButton_docTimeTb"));

        horizontalLayout_24->addWidget(pushButton_docTimeTb);

        pushButton_ghiTimeTb = new QPushButton(layoutWidget2);
        pushButton_ghiTimeTb->setObjectName(QString::fromUtf8("pushButton_ghiTimeTb"));

        horizontalLayout_24->addWidget(pushButton_ghiTimeTb);


        horizontalLayout_23->addLayout(horizontalLayout_24);


        verticalLayout_7->addLayout(horizontalLayout_23);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_lock_stt_text_2 = new QLabel(layoutWidget2);
        label_lock_stt_text_2->setObjectName(QString::fromUtf8("label_lock_stt_text_2"));
        label_lock_stt_text_2->setFont(font);
        label_lock_stt_text_2->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_lock_stt_text_2);

        label_doAm = new QLabel(layoutWidget2);
        label_doAm->setObjectName(QString::fromUtf8("label_doAm"));
        label_doAm->setMaximumSize(QSize(250, 16777215));
        label_doAm->setFrameShape(QFrame::Box);

        horizontalLayout_5->addWidget(label_doAm);

        pushButton_denHanhLang_2 = new QPushButton(layoutWidget2);
        pushButton_denHanhLang_2->setObjectName(QString::fromUtf8("pushButton_denHanhLang_2"));
        pushButton_denHanhLang_2->setEnabled(false);

        horizontalLayout_5->addWidget(pushButton_denHanhLang_2);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_lock_stt_text_3 = new QLabel(layoutWidget2);
        label_lock_stt_text_3->setObjectName(QString::fromUtf8("label_lock_stt_text_3"));
        label_lock_stt_text_3->setFont(font);
        label_lock_stt_text_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout_6->addWidget(label_lock_stt_text_3);

        label_nhietDo = new QLabel(layoutWidget2);
        label_nhietDo->setObjectName(QString::fromUtf8("label_nhietDo"));
        label_nhietDo->setMaximumSize(QSize(250, 16777215));
        label_nhietDo->setFrameShape(QFrame::Box);

        horizontalLayout_6->addWidget(label_nhietDo);

        pushButton_denHanhLang_3 = new QPushButton(layoutWidget2);
        pushButton_denHanhLang_3->setObjectName(QString::fromUtf8("pushButton_denHanhLang_3"));
        pushButton_denHanhLang_3->setEnabled(false);

        horizontalLayout_6->addWidget(pushButton_denHanhLang_3);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_lock_stt_text_4 = new QLabel(layoutWidget2);
        label_lock_stt_text_4->setObjectName(QString::fromUtf8("label_lock_stt_text_4"));
        label_lock_stt_text_4->setFont(font);
        label_lock_stt_text_4->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(label_lock_stt_text_4);

        label_khiGas = new QLabel(layoutWidget2);
        label_khiGas->setObjectName(QString::fromUtf8("label_khiGas"));
        label_khiGas->setMaximumSize(QSize(250, 16777215));
        label_khiGas->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(label_khiGas);

        pushButton_denHanhLang_4 = new QPushButton(layoutWidget2);
        pushButton_denHanhLang_4->setObjectName(QString::fromUtf8("pushButton_denHanhLang_4"));
        pushButton_denHanhLang_4->setEnabled(false);

        horizontalLayout_7->addWidget(pushButton_denHanhLang_4);


        verticalLayout_7->addLayout(horizontalLayout_7);

        label_logging = new QLabel(centralwidget);
        label_logging->setObjectName(QString::fromUtf8("label_logging"));
        label_logging->setGeometry(QRect(10, 160, 411, 141));
        label_logging->setFrameShape(QFrame::Box);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 130, 101, 31));
        horizontalLayout_25 = new QHBoxLayout(widget);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 50));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);

        horizontalLayout_25->addWidget(label_7);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_25->addWidget(checkBox_3);

        SmartHome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartHome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1006, 20));
        menuSetting = new QMenu(menubar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
        menuTh_ng_tin = new QMenu(menubar);
        menuTh_ng_tin->setObjectName(QString::fromUtf8("menuTh_ng_tin"));
        SmartHome->setMenuBar(menubar);
        statusbar = new QStatusBar(SmartHome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SmartHome->setStatusBar(statusbar);

        menubar->addAction(menuSetting->menuAction());
        menubar->addAction(menuTh_ng_tin->menuAction());
        menuSetting->addAction(actionTh_ng_s_ho_t_ng);
        menuTh_ng_tin->addAction(actionPhi_n_b_n_ph_n_m_m);
        menuTh_ng_tin->addSeparator();

        retranslateUi(SmartHome);

        QMetaObject::connectSlotsByName(SmartHome);
    } // setupUi

    void retranslateUi(QMainWindow *SmartHome)
    {
        SmartHome->setWindowTitle(QApplication::translate("SmartHome", "SmartHome", nullptr));
        actionTh_ng_s_ho_t_ng->setText(QApplication::translate("SmartHome", "C\303\240i \304\221\341\272\267t th\303\264ng s\341\273\221 ho\341\272\241t \304\221\341\273\231ng", nullptr));
        actionPhi_n_b_n_ph_n_m_m->setText(QApplication::translate("SmartHome", "Phi\303\252n b\341\272\243n ph\341\272\247n m\341\273\201m", nullptr));
        label_4->setText(QString());
        checkBox_autoQuat->setText(QString());
        label_lock_stt_text_7->setText(QApplication::translate("SmartHome", "T\341\273\261 \304\221\341\273\231ng b\341\272\255t qu\341\272\241t", nullptr));
        pushButton_themAutoQuat->setText(QApplication::translate("SmartHome", "+", nullptr));
        label_2->setText(QApplication::translate("SmartHome", "\304\221\341\272\277n", nullptr));
        pushButton_xoaAutoQuat->setText(QApplication::translate("SmartHome", "X\303\263a c\303\240i \304\221\341\272\267t", nullptr));
        checkBox_autoDenHanhLang->setText(QString());
        label_lock_stt_text_8->setText(QApplication::translate("SmartHome", "T\341\273\261 \304\221\341\273\231ng b\341\272\255t \304\221\303\250n h\303\240nh lang", nullptr));
        pushButton_themAutoDenHanhLang->setText(QApplication::translate("SmartHome", "+", nullptr));
        timeEdit_autoDenHanhLangStart->setDisplayFormat(QApplication::translate("SmartHome", "h:mm AP", nullptr));
        label->setText(QApplication::translate("SmartHome", "\304\221\341\272\277n", nullptr));
        pushButton_xoaAutoDenHL->setText(QApplication::translate("SmartHome", "X\303\263a c\303\240i \304\221\341\272\267t", nullptr));
        checkBox_autoDenKhach->setText(QString());
        label_lock_stt_text_14->setText(QApplication::translate("SmartHome", "T\341\273\261 \304\221\341\273\231ng b\341\272\255t \304\221\303\250n ph\303\262ng kh\303\241ch", nullptr));
        pushButton_themDenKhach->setText(QApplication::translate("SmartHome", "+", nullptr));
        label_6->setText(QApplication::translate("SmartHome", "\304\221\341\272\277n", nullptr));
        pushButton_xoaAutoDenKhach->setText(QApplication::translate("SmartHome", "X\303\263a c\303\240i \304\221\341\272\267t", nullptr));
        checkBox->setText(QString());
        label_lock_stt_text_5->setText(QApplication::translate("SmartHome", "T\341\273\261 \304\221\341\273\231ng b\341\272\255t \304\221\303\250n ph\303\262ng ng\341\273\247", nullptr));
        pushButton_themDenNgu->setText(QApplication::translate("SmartHome", "+", nullptr));
        label_3->setText(QApplication::translate("SmartHome", "\304\221\341\272\277n", nullptr));
        pushButton_xoaAutoDenNgu->setText(QApplication::translate("SmartHome", "X\303\263a c\303\240i \304\221\341\272\267t", nullptr));
        comboBox_danhSachCom->setCurrentText(QString());
        pushButton_lamMoiCom->setText(QApplication::translate("SmartHome", "L\303\240m m\341\273\233i", nullptr));
        pushButton_ketNoi->setText(QApplication::translate("SmartHome", "K\341\272\277t N\341\273\221i", nullptr));
        label_dev_sn_text->setText(QApplication::translate("SmartHome", "M\303\243 thi\341\272\277t b\341\273\213", nullptr));
        label_maThietBi->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        label_dev_stt_text->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i", nullptr));
        label_trangThai->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        label_lock_stt_text->setText(QApplication::translate("SmartHome", "Kh\303\263a c\341\273\255a ch\303\255nh", nullptr));
        label_khoaCuaChinh->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_khoaCua->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_9->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i \304\221\303\250n ph\303\262ng ng\341\273\247", nullptr));
        label_denNgu->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denNgu->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_11->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i qu\341\272\241t ph\303\262ng ng\341\273\247", nullptr));
        label_quatNgu->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_quatNgu->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_12->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i \304\221\303\250n ph\303\262ng kh\303\241ch", nullptr));
        label_denKhach->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denKhach->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_13->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i qu\341\272\241t ph\303\262ng kh\303\241ch", nullptr));
        label_quatKhach->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_quatKhach->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_10->setText(QApplication::translate("SmartHome", "Tr\341\272\241ng th\303\241i \304\221\303\250n h\303\240nh lang", nullptr));
        label_denHanhLang->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denHanhLang->setText(QApplication::translate("SmartHome", "M\341\273\237", nullptr));
        label_lock_stt_text_15->setText(QApplication::translate("SmartHome", "Th\341\273\235i gian th\341\273\261c d\306\260\341\273\233i thi\341\272\277t b\341\273\213", nullptr));
        label_timeTb->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_docTimeTb->setText(QApplication::translate("SmartHome", "\304\220\341\273\215c", nullptr));
        pushButton_ghiTimeTb->setText(QApplication::translate("SmartHome", "Ghi", nullptr));
        label_lock_stt_text_2->setText(QApplication::translate("SmartHome", "\304\220\341\273\231 \341\272\251m", nullptr));
        label_doAm->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denHanhLang_2->setText(QString());
        label_lock_stt_text_3->setText(QApplication::translate("SmartHome", "Nhi\341\273\207t \304\221\341\273\231", nullptr));
        label_nhietDo->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denHanhLang_3->setText(QString());
        label_lock_stt_text_4->setText(QApplication::translate("SmartHome", "Kh\303\255 gas", nullptr));
        label_khiGas->setText(QApplication::translate("SmartHome", "xxx", nullptr));
        pushButton_denHanhLang_4->setText(QString());
        label_logging->setText(QString());
        label_7->setText(QApplication::translate("SmartHome", "Logging", nullptr));
        checkBox_3->setText(QString());
        menuSetting->setTitle(QApplication::translate("SmartHome", "C\303\240i \304\221\341\272\267t", nullptr));
        menuTh_ng_tin->setTitle(QApplication::translate("SmartHome", "Th\303\264ng tin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartHome: public Ui_SmartHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTHOME_H
