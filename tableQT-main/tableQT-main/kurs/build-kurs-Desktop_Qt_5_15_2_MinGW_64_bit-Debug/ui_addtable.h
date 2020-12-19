/********************************************************************************
** Form generated from reading UI file 'addtable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTABLE_H
#define UI_ADDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddTable
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AddTable)
    {
        if (AddTable->objectName().isEmpty())
            AddTable->setObjectName(QString::fromUtf8("AddTable"));
        AddTable->resize(400, 300);
        lineEdit = new QLineEdit(AddTable);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 80, 211, 22));
        label = new QLabel(AddTable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 221, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        pushButton = new QPushButton(AddTable);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 260, 93, 28));

        retranslateUi(AddTable);

        QMetaObject::connectSlotsByName(AddTable);
    } // setupUi

    void retranslateUi(QDialog *AddTable)
    {
        AddTable->setWindowTitle(QCoreApplication::translate("AddTable", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddTable", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\276\320\273\320\261\321\206\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("AddTable", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTable: public Ui_AddTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTABLE_H
