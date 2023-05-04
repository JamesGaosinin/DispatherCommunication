/********************************************************************************
** Form generated from reading UI file 'PhoneCtrlWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONECTRLWIDGET_H
#define UI_PHONECTRLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPhoneCtrlWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Display_L;
    QToolButton *pushButton;
    QToolButton *pushButton_2;
    QToolButton *pushButton_3;
    QToolButton *pushButton_5;
    QToolButton *pushButton_6;
    QToolButton *pushButton_4;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Display_R;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *Btn_Quit;
    QToolButton *Btn_Help;
    QToolButton *Btn_Config;
    QToolButton *Btn_Number;
    QToolButton *Btn_Record;
    QToolButton *Btn_PhoneBook;
    QToolButton *pushButton_15;
    QToolButton *pushButton_18;
    QToolButton *pushButton_14;
    QToolButton *pushButton_13;
    QToolButton *pushButton_17;
    QToolButton *pushButton_16;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *Btn_LoudSpeaker_L;
    QToolButton *Btn_Hold;
    QToolButton *Btn_Meeting;
    QToolButton *Btn_Translate;
    QToolButton *Btn_Direct_Call;
    QToolButton *Btn_Pro_Sele;
    QToolButton *Btn_Recall;
    QToolButton *Btn_Cancel;
    QToolButton *Btn_Right;
    QToolButton *Btn_Single_Call;
    QToolButton *Btn_Mix_Call;
    QToolButton *Btn_LoudSpeaker_R;

    void setupUi(QWidget *CPhoneCtrlWidget)
    {
        if (CPhoneCtrlWidget->objectName().isEmpty())
            CPhoneCtrlWidget->setObjectName(QStringLiteral("CPhoneCtrlWidget"));
        CPhoneCtrlWidget->resize(1081, 233);
        CPhoneCtrlWidget->setStyleSheet(QStringLiteral("background-color: rgb(163, 156, 172);"));
        verticalLayout = new QVBoxLayout(CPhoneCtrlWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 10);
        frame = new QFrame(CPhoneCtrlWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String(".QToolButton\n"
"{\n"
"	background-color: rgb(33, 155, 179);\n"
"	border-top:2px solid rgb(255,255,255);\n"
"	border-left:2px solid rgb(255,255,255);\n"
"	border-right:2px solid rgb(127,127,127);\n"
"	border-bottom:2px solid rgb(127,127,127);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMaximumSize(QSize(30, 1000));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(30, 30));
        label->setMaximumSize(QSize(30, 30));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/phone.png")));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(frame_4);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(2);
        verticalLayout_4 = new QVBoxLayout(frame_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Display_L = new QLabel(frame_6);
        label_Display_L->setObjectName(QStringLiteral("label_Display_L"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_Display_L->setFont(font);
        label_Display_L->setFrameShape(QFrame::Box);
        label_Display_L->setFrameShadow(QFrame::Raised);
        label_Display_L->setLineWidth(2);
        label_Display_L->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_Display_L);


        horizontalLayout_3->addWidget(frame_6);

        pushButton = new QToolButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(80, 60));
        pushButton->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QToolButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 60));
        pushButton_2->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QToolButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 60));
        pushButton_3->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_5 = new QToolButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(80, 60));
        pushButton_5->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QToolButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(80, 60));
        pushButton_6->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QToolButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 60));
        pushButton_4->setMaximumSize(QSize(80, 60));

        horizontalLayout_3->addWidget(pushButton_4);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_7->setLineWidth(2);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_Display_R = new QLabel(frame_7);
        label_Display_R->setObjectName(QStringLiteral("label_Display_R"));
        label_Display_R->setFont(font);
        label_Display_R->setFrameShape(QFrame::Box);
        label_Display_R->setFrameShadow(QFrame::Raised);
        label_Display_R->setLineWidth(2);
        label_Display_R->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_Display_R);


        horizontalLayout_3->addWidget(frame_7);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMaximumSize(QSize(30, 16777215));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(30, 30));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/phone.png")));
        label_2->setScaledContents(true);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(frame_5);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(CPhoneCtrlWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QLatin1String(".QToolButton\n"
"{\n"
"	background-color: rgb(33, 155, 179);\n"
"	border-top:2px solid rgb(255,255,255);\n"
"	border-left:2px solid rgb(255,255,255);\n"
"	border-right:2px solid rgb(127,127,127);\n"
"	border-bottom:2px solid rgb(127,127,127);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Quit = new QToolButton(frame_2);
        Btn_Quit->setObjectName(QStringLiteral("Btn_Quit"));
        Btn_Quit->setMinimumSize(QSize(80, 60));
        Btn_Quit->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_Quit);

        Btn_Help = new QToolButton(frame_2);
        Btn_Help->setObjectName(QStringLiteral("Btn_Help"));
        Btn_Help->setMinimumSize(QSize(80, 60));
        Btn_Help->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_Help);

        Btn_Config = new QToolButton(frame_2);
        Btn_Config->setObjectName(QStringLiteral("Btn_Config"));
        Btn_Config->setMinimumSize(QSize(80, 60));
        Btn_Config->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_Config);

        Btn_Number = new QToolButton(frame_2);
        Btn_Number->setObjectName(QStringLiteral("Btn_Number"));
        Btn_Number->setMinimumSize(QSize(80, 60));
        Btn_Number->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_Number);

        Btn_Record = new QToolButton(frame_2);
        Btn_Record->setObjectName(QStringLiteral("Btn_Record"));
        Btn_Record->setMinimumSize(QSize(80, 60));
        Btn_Record->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_Record);

        Btn_PhoneBook = new QToolButton(frame_2);
        Btn_PhoneBook->setObjectName(QStringLiteral("Btn_PhoneBook"));
        Btn_PhoneBook->setMinimumSize(QSize(80, 60));
        Btn_PhoneBook->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(Btn_PhoneBook);

        pushButton_15 = new QToolButton(frame_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(80, 60));
        pushButton_15->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_15);

        pushButton_18 = new QToolButton(frame_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(80, 60));
        pushButton_18->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_18);

        pushButton_14 = new QToolButton(frame_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(80, 60));
        pushButton_14->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_14);

        pushButton_13 = new QToolButton(frame_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(80, 60));
        pushButton_13->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_13);

        pushButton_17 = new QToolButton(frame_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(80, 60));
        pushButton_17->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_17);

        pushButton_16 = new QToolButton(frame_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(80, 60));
        pushButton_16->setMaximumSize(QSize(80, 60));

        horizontalLayout->addWidget(pushButton_16);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(CPhoneCtrlWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QLatin1String(".QToolButton\n"
"{\n"
"	background-color: rgb(159, 171, 147);\n"
"	border-top:2px solid rgb(255,255,255);\n"
"	border-left:2px solid rgb(255,255,255);\n"
"	border-right:2px solid rgb(127,127,127);\n"
"	border-bottom:2px solid rgb(127,127,127);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Btn_LoudSpeaker_L = new QToolButton(frame_3);
        Btn_LoudSpeaker_L->setObjectName(QStringLiteral("Btn_LoudSpeaker_L"));
        Btn_LoudSpeaker_L->setMinimumSize(QSize(80, 60));
        Btn_LoudSpeaker_L->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_LoudSpeaker_L);

        Btn_Hold = new QToolButton(frame_3);
        Btn_Hold->setObjectName(QStringLiteral("Btn_Hold"));
        Btn_Hold->setMinimumSize(QSize(80, 60));
        Btn_Hold->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Hold);

        Btn_Meeting = new QToolButton(frame_3);
        Btn_Meeting->setObjectName(QStringLiteral("Btn_Meeting"));
        Btn_Meeting->setMinimumSize(QSize(80, 60));
        Btn_Meeting->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Meeting);

        Btn_Translate = new QToolButton(frame_3);
        Btn_Translate->setObjectName(QStringLiteral("Btn_Translate"));
        Btn_Translate->setMinimumSize(QSize(80, 60));
        Btn_Translate->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Translate);

        Btn_Direct_Call = new QToolButton(frame_3);
        Btn_Direct_Call->setObjectName(QStringLiteral("Btn_Direct_Call"));
        Btn_Direct_Call->setMinimumSize(QSize(80, 60));
        Btn_Direct_Call->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Direct_Call);

        Btn_Pro_Sele = new QToolButton(frame_3);
        Btn_Pro_Sele->setObjectName(QStringLiteral("Btn_Pro_Sele"));
        Btn_Pro_Sele->setMinimumSize(QSize(80, 60));
        Btn_Pro_Sele->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Pro_Sele);

        Btn_Recall = new QToolButton(frame_3);
        Btn_Recall->setObjectName(QStringLiteral("Btn_Recall"));
        Btn_Recall->setMinimumSize(QSize(80, 60));
        Btn_Recall->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Recall);

        Btn_Cancel = new QToolButton(frame_3);
        Btn_Cancel->setObjectName(QStringLiteral("Btn_Cancel"));
        Btn_Cancel->setMinimumSize(QSize(80, 60));
        Btn_Cancel->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Cancel);

        Btn_Right = new QToolButton(frame_3);
        Btn_Right->setObjectName(QStringLiteral("Btn_Right"));
        Btn_Right->setMinimumSize(QSize(80, 60));
        Btn_Right->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Right);

        Btn_Single_Call = new QToolButton(frame_3);
        Btn_Single_Call->setObjectName(QStringLiteral("Btn_Single_Call"));
        Btn_Single_Call->setMinimumSize(QSize(80, 60));
        Btn_Single_Call->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Single_Call);

        Btn_Mix_Call = new QToolButton(frame_3);
        Btn_Mix_Call->setObjectName(QStringLiteral("Btn_Mix_Call"));
        Btn_Mix_Call->setMinimumSize(QSize(80, 60));
        Btn_Mix_Call->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_Mix_Call);

        Btn_LoudSpeaker_R = new QToolButton(frame_3);
        Btn_LoudSpeaker_R->setObjectName(QStringLiteral("Btn_LoudSpeaker_R"));
        Btn_LoudSpeaker_R->setMinimumSize(QSize(80, 60));
        Btn_LoudSpeaker_R->setMaximumSize(QSize(80, 60));

        horizontalLayout_2->addWidget(Btn_LoudSpeaker_R);


        verticalLayout->addWidget(frame_3);


        retranslateUi(CPhoneCtrlWidget);

        QMetaObject::connectSlotsByName(CPhoneCtrlWidget);
    } // setupUi

    void retranslateUi(QWidget *CPhoneCtrlWidget)
    {
        CPhoneCtrlWidget->setWindowTitle(QApplication::translate("CPhoneCtrlWidget", "CPhoneCtrlWidget", 0));
        label->setText(QString());
        label_Display_L->setText(QString());
        pushButton->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        pushButton_2->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        pushButton_3->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        pushButton_5->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        pushButton_6->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        pushButton_4->setText(QApplication::translate("CPhoneCtrlWidget", "DDT", 0));
        label_Display_R->setText(QString());
        label_2->setText(QString());
        Btn_Quit->setText(QApplication::translate("CPhoneCtrlWidget", "\351\200\200\345\207\272", 0));
        Btn_Help->setText(QApplication::translate("CPhoneCtrlWidget", "\345\270\256\345\212\251", 0));
        Btn_Config->setText(QApplication::translate("CPhoneCtrlWidget", "\351\205\215\347\275\256", 0));
        Btn_Number->setText(QApplication::translate("CPhoneCtrlWidget", "\346\213\250\345\217\267\347\233\230", 0));
        Btn_Record->setText(QApplication::translate("CPhoneCtrlWidget", "\345\221\274\345\217\253\n"
"\347\272\252\345\275\225", 0));
        Btn_PhoneBook->setText(QApplication::translate("CPhoneCtrlWidget", "\345\217\267\347\240\201\347\260\277", 0));
        pushButton_15->setText(QString());
        pushButton_18->setText(QString());
        pushButton_14->setText(QString());
        pushButton_13->setText(QString());
        pushButton_17->setText(QString());
        pushButton_16->setText(QString());
        Btn_LoudSpeaker_L->setText(QApplication::translate("CPhoneCtrlWidget", "\345\267\246\345\205\215\346\217\220", 0));
        Btn_Hold->setText(QApplication::translate("CPhoneCtrlWidget", "\344\277\235\346\214\201", 0));
        Btn_Meeting->setText(QApplication::translate("CPhoneCtrlWidget", "\344\274\232\350\256\256", 0));
        Btn_Translate->setText(QApplication::translate("CPhoneCtrlWidget", "\350\275\254\347\247\273", 0));
        Btn_Direct_Call->setText(QApplication::translate("CPhoneCtrlWidget", "\347\233\264\346\216\245\n"
"\346\213\250\345\217\267", 0));
        Btn_Pro_Sele->setText(QApplication::translate("CPhoneCtrlWidget", "\347\250\213\345\272\217\n"
"\351\200\211\346\216\245", 0));
        Btn_Recall->setText(QApplication::translate("CPhoneCtrlWidget", "\351\207\215\346\222\255", 0));
        Btn_Cancel->setText(QApplication::translate("CPhoneCtrlWidget", "\345\217\226\346\266\210", 0));
        Btn_Right->setText(QApplication::translate("CPhoneCtrlWidget", "\351\224\256\346\235\203", 0));
        Btn_Single_Call->setText(QApplication::translate("CPhoneCtrlWidget", "\345\215\225\345\221\274", 0));
        Btn_Mix_Call->setText(QApplication::translate("CPhoneCtrlWidget", "\345\271\266\346\234\272", 0));
        Btn_LoudSpeaker_R->setText(QApplication::translate("CPhoneCtrlWidget", "\345\217\263\345\205\215\346\217\220", 0));
    } // retranslateUi

};

namespace Ui {
    class CPhoneCtrlWidget: public Ui_CPhoneCtrlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONECTRLWIDGET_H
