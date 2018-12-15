/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frameOrigen;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *lineEditUserName_Origen;
    QLabel *label_6;
    QLineEdit *lineEditPasswordOrigen;
    QLabel *label_5;
    QLineEdit *lineEditPortOrigen;
    QLabel *label_3;
    QLineEdit *lineEditInstanceNameOrigen;
    QLabel *label_4;
    QLineEdit *lineEditDatabaseNameOrigen;
    QPushButton *pushButtonConnectDBO;
    QFrame *frameDestino;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_18;
    QLineEdit *lineEditUserName_Destino;
    QLabel *label_15;
    QLineEdit *lineEditPasswordDestino;
    QLabel *label_16;
    QLineEdit *lineEditPortDestino;
    QLabel *label_17;
    QLineEdit *lineEditInstanceNameDestino;
    QLabel *label_14;
    QLineEdit *lineEditDatabaseNameDestino;
    QPushButton *pushButtonConnectDBD;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(542, 344);
        MainWindow->setStyleSheet(QStringLiteral("background-color:#3F51B5;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frameOrigen = new QFrame(centralwidget);
        frameOrigen->setObjectName(QStringLiteral("frameOrigen"));
        frameOrigen->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        frameOrigen->setFrameShape(QFrame::StyledPanel);
        frameOrigen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameOrigen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frameOrigen);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_7 = new QLabel(frameOrigen);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        lineEditUserName_Origen = new QLineEdit(frameOrigen);
        lineEditUserName_Origen->setObjectName(QStringLiteral("lineEditUserName_Origen"));

        verticalLayout->addWidget(lineEditUserName_Origen);

        label_6 = new QLabel(frameOrigen);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        lineEditPasswordOrigen = new QLineEdit(frameOrigen);
        lineEditPasswordOrigen->setObjectName(QStringLiteral("lineEditPasswordOrigen"));

        verticalLayout->addWidget(lineEditPasswordOrigen);

        label_5 = new QLabel(frameOrigen);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        lineEditPortOrigen = new QLineEdit(frameOrigen);
        lineEditPortOrigen->setObjectName(QStringLiteral("lineEditPortOrigen"));

        verticalLayout->addWidget(lineEditPortOrigen);

        label_3 = new QLabel(frameOrigen);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEditInstanceNameOrigen = new QLineEdit(frameOrigen);
        lineEditInstanceNameOrigen->setObjectName(QStringLiteral("lineEditInstanceNameOrigen"));

        verticalLayout->addWidget(lineEditInstanceNameOrigen);

        label_4 = new QLabel(frameOrigen);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        lineEditDatabaseNameOrigen = new QLineEdit(frameOrigen);
        lineEditDatabaseNameOrigen->setObjectName(QStringLiteral("lineEditDatabaseNameOrigen"));

        verticalLayout->addWidget(lineEditDatabaseNameOrigen);

        pushButtonConnectDBO = new QPushButton(frameOrigen);
        pushButtonConnectDBO->setObjectName(QStringLiteral("pushButtonConnectDBO"));
        pushButtonConnectDBO->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButtonConnectDBO);


        horizontalLayout->addWidget(frameOrigen);

        frameDestino = new QFrame(centralwidget);
        frameDestino->setObjectName(QStringLiteral("frameDestino"));
        frameDestino->setStyleSheet(QStringLiteral("background-color: white;"));
        frameDestino->setFrameShape(QFrame::StyledPanel);
        frameDestino->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameDestino);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(frameDestino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        label_18 = new QLabel(frameDestino);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_3->addWidget(label_18);

        lineEditUserName_Destino = new QLineEdit(frameDestino);
        lineEditUserName_Destino->setObjectName(QStringLiteral("lineEditUserName_Destino"));

        verticalLayout_3->addWidget(lineEditUserName_Destino);

        label_15 = new QLabel(frameDestino);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_3->addWidget(label_15);

        lineEditPasswordDestino = new QLineEdit(frameDestino);
        lineEditPasswordDestino->setObjectName(QStringLiteral("lineEditPasswordDestino"));

        verticalLayout_3->addWidget(lineEditPasswordDestino);

        label_16 = new QLabel(frameDestino);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_3->addWidget(label_16);

        lineEditPortDestino = new QLineEdit(frameDestino);
        lineEditPortDestino->setObjectName(QStringLiteral("lineEditPortDestino"));

        verticalLayout_3->addWidget(lineEditPortDestino);

        label_17 = new QLabel(frameDestino);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_3->addWidget(label_17);

        lineEditInstanceNameDestino = new QLineEdit(frameDestino);
        lineEditInstanceNameDestino->setObjectName(QStringLiteral("lineEditInstanceNameDestino"));

        verticalLayout_3->addWidget(lineEditInstanceNameDestino);

        label_14 = new QLabel(frameDestino);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_3->addWidget(label_14);

        lineEditDatabaseNameDestino = new QLineEdit(frameDestino);
        lineEditDatabaseNameDestino->setObjectName(QStringLiteral("lineEditDatabaseNameDestino"));

        verticalLayout_3->addWidget(lineEditDatabaseNameDestino);

        pushButtonConnectDBD = new QPushButton(frameDestino);
        pushButtonConnectDBD->setObjectName(QStringLiteral("pushButtonConnectDBD"));

        verticalLayout_3->addWidget(pushButtonConnectDBD);


        horizontalLayout->addWidget(frameDestino);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Origen", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Puerto:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nombre de instancia:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Nombre de la base de datos:", nullptr));
        pushButtonConnectDBO->setText(QApplication::translate("MainWindow", "Conectar a la base de datos origen", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Destino", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Puerto:", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Nombre de instancia:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Nombre de la base de datos:", nullptr));
        pushButtonConnectDBD->setText(QApplication::translate("MainWindow", "Conectar a la base de datos destino", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
