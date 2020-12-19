/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QDialogButtonBox *dialogButtonBox;
    QLineEdit *NameEdit;
    QLabel *label;
    QLineEdit *AddressEdit;
    QLabel *label_2;
    QLineEdit *DateEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *DescriptionEdit;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(420, 300);
        AddWindow->setMinimumSize(QSize(420, 300));
        AddWindow->setMaximumSize(QSize(420, 300));
        dialogButtonBox = new QDialogButtonBox(AddWindow);
        dialogButtonBox->setObjectName(QString::fromUtf8("dialogButtonBox"));
        dialogButtonBox->setGeometry(QRect(20, 210, 361, 61));
        dialogButtonBox->setOrientation(Qt::Vertical);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        NameEdit = new QLineEdit(AddWindow);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setGeometry(QRect(130, 30, 251, 22));
        NameEdit->setMaximumSize(QSize(320, 260));
        label = new QLabel(AddWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        AddressEdit = new QLineEdit(AddWindow);
        AddressEdit->setObjectName(QString::fromUtf8("AddressEdit"));
        AddressEdit->setGeometry(QRect(130, 70, 251, 22));
        AddressEdit->setMaximumSize(QSize(320, 260));
        label_2 = new QLabel(AddWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 16));
        label_2->setFont(font);
        DateEdit = new QLineEdit(AddWindow);
        DateEdit->setObjectName(QString::fromUtf8("DateEdit"));
        DateEdit->setGeometry(QRect(130, 110, 251, 22));
        DateEdit->setMaximumSize(QSize(320, 260));
        label_3 = new QLabel(AddWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 101, 16));
        label_3->setFont(font);
        label_4 = new QLabel(AddWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 81, 16));
        label_4->setFont(font);
        DescriptionEdit = new QLineEdit(AddWindow);
        DescriptionEdit->setObjectName(QString::fromUtf8("DescriptionEdit"));
        DescriptionEdit->setGeometry(QRect(130, 140, 251, 22));
        DescriptionEdit->setMaximumSize(QSize(320, 260));

        retranslateUi(AddWindow);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), AddWindow, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), AddWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddWindow", "\320\235\320\260\320\267\321\213\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        DateEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("AddWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
