/********************************************************************************
** Form generated from reading UI file 'tablesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLESETTING_H
#define UI_TABLESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TableSetting
{
public:
    QPushButton *addColumn;
    QPushButton *editColumn;
    QPushButton *pushButton;

    void setupUi(QDialog *TableSetting)
    {
        if (TableSetting->objectName().isEmpty())
            TableSetting->setObjectName(QString::fromUtf8("TableSetting"));
        TableSetting->resize(280, 395);
        addColumn = new QPushButton(TableSetting);
        addColumn->setObjectName(QString::fromUtf8("addColumn"));
        addColumn->setGeometry(QRect(60, 30, 161, 28));
        editColumn = new QPushButton(TableSetting);
        editColumn->setObjectName(QString::fromUtf8("editColumn"));
        editColumn->setGeometry(QRect(60, 70, 161, 28));
        pushButton = new QPushButton(TableSetting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 350, 93, 28));

        retranslateUi(TableSetting);

        QMetaObject::connectSlotsByName(TableSetting);
    } // setupUi

    void retranslateUi(QDialog *TableSetting)
    {
        TableSetting->setWindowTitle(QCoreApplication::translate("TableSetting", "Dialog", nullptr));
        addColumn->setText(QCoreApplication::translate("TableSetting", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        editColumn->setText(QCoreApplication::translate("TableSetting", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\321\206\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("TableSetting", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableSetting: public Ui_TableSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESETTING_H
