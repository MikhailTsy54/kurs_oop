/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *NameEdit;
    QLabel *label;
    QLineEdit *DateEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *AddressEdit;
    QLabel *label_3;
    QLineEdit *DescriptionEdit;

    void setupUi(QDialog *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QString::fromUtf8("Editor"));
        Editor->resize(400, 300);
        buttonBox = new QDialogButtonBox(Editor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        NameEdit = new QLineEdit(Editor);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setGeometry(QRect(130, 30, 251, 22));
        NameEdit->setMaximumSize(QSize(320, 260));
        label = new QLabel(Editor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        DateEdit = new QLineEdit(Editor);
        DateEdit->setObjectName(QString::fromUtf8("DateEdit"));
        DateEdit->setGeometry(QRect(130, 110, 251, 22));
        DateEdit->setMaximumSize(QSize(320, 260));
        label_4 = new QLabel(Editor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 81, 16));
        label_4->setFont(font);
        label_2 = new QLabel(Editor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 16));
        label_2->setFont(font);
        AddressEdit = new QLineEdit(Editor);
        AddressEdit->setObjectName(QString::fromUtf8("AddressEdit"));
        AddressEdit->setGeometry(QRect(130, 70, 251, 22));
        AddressEdit->setMaximumSize(QSize(320, 260));
        label_3 = new QLabel(Editor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 101, 16));
        label_3->setFont(font);
        DescriptionEdit = new QLineEdit(Editor);
        DescriptionEdit->setObjectName(QString::fromUtf8("DescriptionEdit"));
        DescriptionEdit->setGeometry(QRect(130, 140, 251, 22));
        DescriptionEdit->setMaximumSize(QSize(320, 260));

        retranslateUi(Editor);
        QObject::connect(buttonBox, SIGNAL(accepted()), Editor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Editor, SLOT(reject()));

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QDialog *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Editor", "\320\235\320\260\320\267\321\213\320\262\320\260\320\275\320\270\320\265", nullptr));
        DateEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("Editor", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("Editor", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("Editor", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217", nullptr));
        DescriptionEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
