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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
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
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonClearFields;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonContinue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(420, 486);
        MainWindow->setStyleSheet(QStringLiteral("background-color:#3F51B5;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat SemiBold"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout_2->addWidget(label_8);


        verticalLayout_2->addWidget(frame_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frameDestino = new QFrame(frame);
        frameDestino->setObjectName(QStringLiteral("frameDestino"));
        frameDestino->setStyleSheet(QStringLiteral("background-color: white;"));
        frameDestino->setFrameShape(QFrame::StyledPanel);
        frameDestino->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameDestino);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(frameDestino);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

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
        pushButtonConnectDBD->setStyleSheet(QLatin1String("	color: white;\n"
"	background-color: #3F51B5;"));

        verticalLayout_3->addWidget(pushButtonConnectDBD);


        horizontalLayout->addWidget(frameDestino);

        frameOrigen = new QFrame(frame);
        frameOrigen->setObjectName(QStringLiteral("frameOrigen"));
        frameOrigen->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        frameOrigen->setFrameShape(QFrame::StyledPanel);
        frameOrigen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameOrigen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frameOrigen);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

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
        pushButtonConnectDBO->setStyleSheet(QLatin1String("	color: white;\n"
"	background-color: #3F51B5;"));

        verticalLayout->addWidget(pushButtonConnectDBO);


        horizontalLayout->addWidget(frameOrigen);


        verticalLayout_2->addWidget(frame);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setStyleSheet(QLatin1String("background-color: white;\n"
"border-radius: 5px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonClearFields = new QPushButton(frame_5);
        pushButtonClearFields->setObjectName(QStringLiteral("pushButtonClearFields"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClearFields->sizePolicy().hasHeightForWidth());
        pushButtonClearFields->setSizePolicy(sizePolicy);
        pushButtonClearFields->setStyleSheet(QLatin1String("	color: white;\n"
"	background-color: #3F51B5;"));

        horizontalLayout_4->addWidget(pushButtonClearFields);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonContinue = new QPushButton(frame_5);
        pushButtonContinue->setObjectName(QStringLiteral("pushButtonContinue"));
        sizePolicy.setHeightForWidth(pushButtonContinue->sizePolicy().hasHeightForWidth());
        pushButtonContinue->setSizePolicy(sizePolicy);
        pushButtonContinue->setStyleSheet(QLatin1String("	color: white;\n"
"	background-color: #3F51B5;"));

        horizontalLayout_4->addWidget(pushButtonContinue);


        horizontalLayout_3->addWidget(frame_5);


        verticalLayout_2->addWidget(frame_3);

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
        label_8->setText(QApplication::translate("MainWindow", "Administrar Conexiones", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "BD Destino", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Puerto:", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Nombre de instancia:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Nombre de la base de datos:", nullptr));
        pushButtonConnectDBD->setText(QApplication::translate("MainWindow", "Probar Conexi\303\263n", nullptr));
        label->setText(QApplication::translate("MainWindow", "BD Origen", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Nombre de usuario:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Puerto:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nombre de instancia:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Nombre de la base de datos:", nullptr));
        pushButtonConnectDBO->setText(QApplication::translate("MainWindow", "Probar Conexi\303\263n", nullptr));
        pushButtonClearFields->setText(QApplication::translate("MainWindow", "Limpiar Campos", nullptr));
        pushButtonContinue->setText(QApplication::translate("MainWindow", "Continuar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
