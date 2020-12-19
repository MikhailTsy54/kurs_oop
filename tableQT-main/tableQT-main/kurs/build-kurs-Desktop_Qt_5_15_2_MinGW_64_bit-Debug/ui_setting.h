/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->setEnabled(true);
        Setting->setStyleSheet(QString::fromUtf8(" background-color:rgb(85, 0, 127);\n"
"color:rgb(255, 255, 255)"));
        commandLinkButton = new QCommandLinkButton(Setting);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 30, 181, 41));
        commandLinkButton->setMouseTracking(false);
        commandLinkButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("1")));
        commandLinkButton->setIcon(icon);
        commandLinkButton->setCheckable(false);
        commandLinkButton->setAutoRepeatDelay(299);
        commandLinkButton->setAutoRepeatInterval(100);
        commandLinkButton->setAutoDefault(true);
        commandLinkButton->setDefault(false);
        commandLinkButton_2 = new QCommandLinkButton(Setting);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(10, 90, 181, 41));
        commandLinkButton_2->setIcon(icon);
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 390, 93, 28));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Dialog", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Setting", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        commandLinkButton->setDescription(QString());
        commandLinkButton_2->setText(QCoreApplication::translate("Setting", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Setting", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
