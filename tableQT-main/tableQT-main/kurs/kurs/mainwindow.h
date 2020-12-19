#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "date.h"

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <QTableWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void update_table();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();




    void on_del_triggered();

    void on_edit_triggered();

    void on_find_clicked();

    void on_save_triggered();

    void on_open_triggered();

    void on_settings_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QTableWidget *table;

};
#endif // MAINWINDOW_H
