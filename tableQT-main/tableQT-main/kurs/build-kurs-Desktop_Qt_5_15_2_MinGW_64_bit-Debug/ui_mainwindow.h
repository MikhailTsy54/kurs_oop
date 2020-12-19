/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *save;
    QAction *del;
    QAction *edit;
    QAction *open;
    QAction *settings;
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *findEdit;
    QPushButton *find;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 472);
        MainWindow->setMinimumSize(QSize(630, 472));
        MainWindow->setMaximumSize(QSize(630, 472));
        MainWindow->setStyleSheet(QString::fromUtf8(" background-color:rgb(85, 0, 127);\n"
"color:rgb(255, 255, 255)"));
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon);
        del = new QAction(MainWindow);
        del->setObjectName(QString::fromUtf8("del"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/basket.png"), QSize(), QIcon::Normal, QIcon::Off);
        del->setIcon(icon1);
        edit = new QAction(MainWindow);
        edit->setObjectName(QString::fromUtf8("edit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/highlighter.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon2);
        open = new QAction(MainWindow);
        open->setObjectName(QString::fromUtf8("open"));
        settings = new QAction(MainWindow);
        settings->setObjectName(QString::fromUtf8("settings"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 10, 83, 33));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        findEdit = new QLineEdit(centralwidget);
        findEdit->setObjectName(QString::fromUtf8("findEdit"));
        findEdit->setGeometry(QRect(200, 20, 231, 21));
        find = new QPushButton(centralwidget);
        find->setObjectName(QString::fromUtf8("find"));
        find->setGeometry(QRect(440, 17, 93, 31));
        find->setStyleSheet(QString::fromUtf8(" background-color:rgb(127, 0, 190) "));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 370, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8(" background-color:rgb(127, 0, 190) "));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 601, 271));
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:rgb(170, 170, 255) }"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(save);
        menu->addAction(edit);
        menu->addSeparator();
        menu->addAction(del);
        menu->addAction(open);
        menu->addAction(settings);
        toolBar->addAction(save);
        toolBar->addSeparator();
        toolBar->addAction(edit);
        toolBar->addAction(del);
        toolBar->addAction(settings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        del->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        del->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        edit->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        settings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", nullptr));
        find->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
