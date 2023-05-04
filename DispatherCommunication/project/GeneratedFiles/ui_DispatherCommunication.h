/********************************************************************************
** Form generated from reading UI file 'DispatherCommunication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPATHERCOMMUNICATION_H
#define UI_DISPATHERCOMMUNICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PhoneCtrlWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CDispatherCommunicationClass
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Page;
    QStackedWidget *stackedWidget;
    QWidget *frame_Ctrl;
    QVBoxLayout *verticalLayout_2;
    CPhoneCtrlWidget *widget_Ctrl;
    QFrame *frame_Tip;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_Time;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CDispatherCommunicationClass)
    {
        if (CDispatherCommunicationClass->objectName().isEmpty())
            CDispatherCommunicationClass->setObjectName(QStringLiteral("CDispatherCommunicationClass"));
        CDispatherCommunicationClass->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CDispatherCommunicationClass->sizePolicy().hasHeightForWidth());
        CDispatherCommunicationClass->setSizePolicy(sizePolicy);
        CDispatherCommunicationClass->setMinimumSize(QSize(1024, 768));
        CDispatherCommunicationClass->setMaximumSize(QSize(1039, 768));
        CDispatherCommunicationClass->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(CDispatherCommunicationClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_Page = new QFrame(CDispatherCommunicationClass);
        frame_Page->setObjectName(QStringLiteral("frame_Page"));
        frame_Page->setStyleSheet(QLatin1String(".QToolButton\n"
"{\n"
"	background-color:rgb(33,155,179);\n"
"	border-top:2px solid rgb(255,255,255);\n"
"	border-left:2px solid rgb(255,255,255);\n"
"	border-right:2px solid rgb(0,0,0);\n"
"	border-bottom:2px solid rgb(0,0,0);\n"
"}\n"
".QToolButton:checked{color:rgb(255,255,0);}"));
        frame_Page->setFrameShape(QFrame::StyledPanel);
        frame_Page->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_Page);

        stackedWidget = new QStackedWidget(CDispatherCommunicationClass);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(stackedWidget);

        frame_Ctrl = new QWidget(CDispatherCommunicationClass);
        frame_Ctrl->setObjectName(QStringLiteral("frame_Ctrl"));
        frame_Ctrl->setMinimumSize(QSize(0, 100));
        frame_Ctrl->setStyleSheet(QStringLiteral("background-color: rgb(163, 156, 172);"));
        verticalLayout_2 = new QVBoxLayout(frame_Ctrl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_Ctrl = new CPhoneCtrlWidget(frame_Ctrl);
        widget_Ctrl->setObjectName(QStringLiteral("widget_Ctrl"));

        verticalLayout_2->addWidget(widget_Ctrl);


        verticalLayout->addWidget(frame_Ctrl);

        frame_Tip = new QFrame(CDispatherCommunicationClass);
        frame_Tip->setObjectName(QStringLiteral("frame_Tip"));
        frame_Tip->setMinimumSize(QSize(0, 30));
        frame_Tip->setMaximumSize(QSize(16777215, 30));
        frame_Tip->setStyleSheet(QLatin1String(".QFrame\n"
"{\n"
"	border:2px solid rgb(255,255,255);\n"
"}"));
        frame_Tip->setFrameShape(QFrame::StyledPanel);
        frame_Tip->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_Tip);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 3);
        frame = new QFrame(frame_Tip);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(20, 20));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/log.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(400, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        horizontalLayout_4->addWidget(frame);

        frame_2 = new QFrame(frame_Tip);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral(""));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/link.png")));
        label_3->setScaledContents(true);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(180, 0));
        label_4->setMaximumSize(QSize(200, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


        horizontalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(frame_Tip);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/clock.png")));
        label_5->setScaledContents(true);

        horizontalLayout_3->addWidget(label_5);

        label_Time = new QLabel(frame_3);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Time->sizePolicy().hasHeightForWidth());
        label_Time->setSizePolicy(sizePolicy1);
        label_Time->setStyleSheet(QStringLiteral(""));
        label_Time->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_Time);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(20, 20));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/typer.png")));
        label_7->setScaledContents(true);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(20, 20));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/img/typer.png")));
        label_8->setScaledContents(true);

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addWidget(frame_3);


        verticalLayout->addWidget(frame_Tip);


        retranslateUi(CDispatherCommunicationClass);

        QMetaObject::connectSlotsByName(CDispatherCommunicationClass);
    } // setupUi

    void retranslateUi(QWidget *CDispatherCommunicationClass)
    {
        CDispatherCommunicationClass->setWindowTitle(QApplication::translate("CDispatherCommunicationClass", "CDispatherCommunication", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("CDispatherCommunicationClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\277\234\345\223\210\346\225\260\345\255\227\350\260\203\345\272\246\347\263\273\347\273\237\357\274\201", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("CDispatherCommunicationClass", "\345\260\261\347\273\252", 0));
        label_5->setText(QString());
        label_Time->setText(QApplication::translate("CDispatherCommunicationClass", "\346\230\276\347\244\272\346\227\266\351\227\264", 0));
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDispatherCommunicationClass: public Ui_CDispatherCommunicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPATHERCOMMUNICATION_H
