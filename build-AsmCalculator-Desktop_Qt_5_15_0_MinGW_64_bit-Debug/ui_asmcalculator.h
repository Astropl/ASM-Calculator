/********************************************************************************
** Form generated from reading UI file 'asmcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASMCALCULATOR_H
#define UI_ASMCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsmCalculator
{
public:
    QAction *actionO_programie;
    QAction *actionInformacje;
    QAction *actionZamknij;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AsmCalculator)
    {
        if (AsmCalculator->objectName().isEmpty())
            AsmCalculator->setObjectName(QString::fromUtf8("AsmCalculator"));
        AsmCalculator->resize(400, 475);
        actionO_programie = new QAction(AsmCalculator);
        actionO_programie->setObjectName(QString::fromUtf8("actionO_programie"));
        actionInformacje = new QAction(AsmCalculator);
        actionInformacje->setObjectName(QString::fromUtf8("actionInformacje"));
        actionZamknij = new QAction(AsmCalculator);
        actionZamknij->setObjectName(QString::fromUtf8("actionZamknij"));
        centralwidget = new QWidget(AsmCalculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 320, 75, 23));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 380, 71, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 350, 61, 16));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 141, 71));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 40, 82, 17));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 110, 281, 171));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 279, 169));
        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 130, 113, 20));
        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 40, 113, 20));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 91, 20));
        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 10, 113, 20));
        lineEdit->setInputMethodHints(Qt::ImhNone);
        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 70, 113, 20));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 130, 81, 16));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 70, 81, 16));
        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 100, 113, 20));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 100, 91, 16));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 91, 16));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 400, 75, 23));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 350, 91, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(56, 380, 91, 20));
        AsmCalculator->setCentralWidget(centralwidget);
        pushButton->raise();
        groupBox->raise();
        scrollArea->raise();
        pushButton_2->raise();
        label_8->raise();
        label_9->raise();
        label_7->raise();
        label_6->raise();
        menubar = new QMenuBar(AsmCalculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        AsmCalculator->setMenuBar(menubar);
        statusbar = new QStatusBar(AsmCalculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AsmCalculator->setStatusBar(statusbar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuPlik->addAction(actionZamknij);
        menuInfo->addAction(actionO_programie);
        menuInfo->addAction(actionInformacje);

        retranslateUi(AsmCalculator);

        QMetaObject::connectSlotsByName(AsmCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *AsmCalculator)
    {
        AsmCalculator->setWindowTitle(QCoreApplication::translate("AsmCalculator", "AsmCalculator", nullptr));
        actionO_programie->setText(QCoreApplication::translate("AsmCalculator", "O programie", nullptr));
        actionInformacje->setText(QCoreApplication::translate("AsmCalculator", "Informacje", nullptr));
        actionZamknij->setText(QCoreApplication::translate("AsmCalculator", "Zamknij", nullptr));
        pushButton->setText(QCoreApplication::translate("AsmCalculator", "Oblicz", nullptr));
        label_6->setText(QCoreApplication::translate("AsmCalculator", "0", nullptr));
        label_7->setText(QCoreApplication::translate("AsmCalculator", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AsmCalculator", "Najpierw wybierz p\305\202e\304\207", nullptr));
        radioButton->setText(QCoreApplication::translate("AsmCalculator", "Kobieta", nullptr));
        radioButton_2->setText(QCoreApplication::translate("AsmCalculator", "M\304\231zczzna", nullptr));
        lineEdit_5->setInputMask(QString());
        lineEdit_2->setInputMask(QString());
        label->setText(QCoreApplication::translate("AsmCalculator", "Podaj wzrost w cm", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("AsmCalculator", "Podaj sw\303\263j wzrost w metrach np 1,84", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_3->setInputMask(QString());
        label_5->setText(QCoreApplication::translate("AsmCalculator", "lewa noga  SMM", nullptr));
        label_3->setText(QCoreApplication::translate("AsmCalculator", "Lewa reka  SMM", nullptr));
        lineEdit_4->setInputMask(QString());
        label_4->setText(QCoreApplication::translate("AsmCalculator", "Prawa noga  SMM", nullptr));
        label_2->setText(QCoreApplication::translate("AsmCalculator", "Prawa r\304\231ka SMM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AsmCalculator", "Zamknij", nullptr));
        label_8->setText(QCoreApplication::translate("AsmCalculator", "Twoje SMI:", nullptr));
        label_9->setText(QCoreApplication::translate("AsmCalculator", "Tw\303\263j wynik ASM to:", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("AsmCalculator", "Plik", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("AsmCalculator", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsmCalculator: public Ui_AsmCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASMCALCULATOR_H
