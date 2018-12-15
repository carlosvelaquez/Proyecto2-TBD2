/********************************************************************************
** Form generated from reading UI file 'ReplicarWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLICARWINDOW_H
#define UI_REPLICARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplicarWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidgetDisponibles;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidgetReplicar;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ReplicarWindow)
    {
        if (ReplicarWindow->objectName().isEmpty())
            ReplicarWindow->setObjectName(QStringLiteral("ReplicarWindow"));
        ReplicarWindow->resize(533, 328);
        ReplicarWindow->setStyleSheet(QStringLiteral("background-color:#3F51B5;"));
        verticalLayout_3 = new QVBoxLayout(ReplicarWindow);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(ReplicarWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat SemiBold"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));

        verticalLayout_3->addWidget(label);

        frame = new QFrame(ReplicarWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	background-color:white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat Medium"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        listWidgetDisponibles = new QListWidget(frame_2);
        listWidgetDisponibles->setObjectName(QStringLiteral("listWidgetDisponibles"));

        verticalLayout->addWidget(listWidgetDisponibles);


        horizontalLayout->addWidget(frame_2);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonAdd = new QPushButton(frame_4);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(frame_4);
        pushButtonRemove->setObjectName(QStringLiteral("pushButtonRemove"));

        verticalLayout_4->addWidget(pushButtonRemove);


        horizontalLayout->addWidget(frame_4);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        listWidgetReplicar = new QListWidget(frame_3);
        listWidgetReplicar->setObjectName(QStringLiteral("listWidgetReplicar"));

        verticalLayout_2->addWidget(listWidgetReplicar);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_3->addWidget(frame);

        frame_5 = new QFrame(ReplicarWindow);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	background-color:white;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: white;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(frame_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(frame_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_3->addWidget(frame_5);


        retranslateUi(ReplicarWindow);

        QMetaObject::connectSlotsByName(ReplicarWindow);
    } // setupUi

    void retranslateUi(QWidget *ReplicarWindow)
    {
        ReplicarWindow->setWindowTitle(QApplication::translate("ReplicarWindow", "Replicar Tablas", nullptr));
        label->setText(QApplication::translate("ReplicarWindow", "Seleccionar Tablas a Replicar", nullptr));
        label_2->setText(QApplication::translate("ReplicarWindow", "Tablas Disponibles", nullptr));
        pushButtonAdd->setText(QApplication::translate("ReplicarWindow", ">", nullptr));
        pushButtonRemove->setText(QApplication::translate("ReplicarWindow", "<", nullptr));
        label_3->setText(QApplication::translate("ReplicarWindow", "Tablas a Replicar", nullptr));
        pushButton_4->setText(QApplication::translate("ReplicarWindow", "Resetear Cambios", nullptr));
        pushButton_3->setText(QApplication::translate("ReplicarWindow", "Comenzar Replica", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplicarWindow: public Ui_ReplicarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLICARWINDOW_H
