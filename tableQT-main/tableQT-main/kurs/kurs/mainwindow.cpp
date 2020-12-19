#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>
#include<QString>
#include "date.h"
#include "addwindow.h"
#include<QMessageBox>
#include"editor.h"
#include"setting.h"
#include<QTextStream>
#include"database.h"
#include<QDebug>
using namespace std;
Date musey ;

QStringList nameColumn;
void setColumn(){
    nameColumn.append("Название");
    nameColumn.append("Адрес");
    nameColumn.append("Дата открытия");
    nameColumn.append("Описание");
}
//Пересоздает таблицу (вызывать при изменении musey)
void MainWindow::update_table()
{
    setColumn();
    ui->tableWidget->setRowCount(musey.size());
    ui->tableWidget->setColumnCount(nameColumn.size());
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<nameColumn);//Задание имени столбцов
   ui->tableWidget->setStyleSheet("QHeaderView::section { background-color:rgb(170, 170, 255) }");
   for(int i=0;i<nameColumn.size();i++){
       ui->tableWidget->setColumnWidth(i,150);
   }


    QString s = "";
    for(int i=0;i<ui->tableWidget->rowCount();i++){
        for(int j=0;j<ui->tableWidget->columnCount();j++){

            if(j==0){
              QTableWidgetItem *tbl = new QTableWidgetItem(musey.getName(i));
               ui->tableWidget->setItem(i,j,tbl);
            }else if(j==1){
                QTableWidgetItem *tbl = new QTableWidgetItem(musey.getAddress(i));
                 ui->tableWidget->setItem(i,j,tbl);
            }else if(j==2){
                QTableWidgetItem *tbl = new QTableWidgetItem(musey.getDate(i));
                 ui->tableWidget->setItem(i,j,tbl);
            }else if (j==3){
                QTableWidgetItem *tbl = new QTableWidgetItem(musey.getDescription(i));
                 ui->tableWidget->setItem(i,j,tbl);
            }
        }
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    update_table();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    AddWindow addWindow ;
    if(addWindow.exec()){
        addWindow.getValues();
        if(addWindow.checkDate()){
            QMessageBox::critical(this,"Ошибка","Вы пропустили строчку");
        }
        else{
        musey.add(addWindow.name,addWindow.address,addWindow.date,addWindow.description);
        update_table();
        }
    }else{
        return;
    }
}





void MainWindow::on_del_triggered()
{
    QWidget *w = qobject_cast<QWidget *>(sender()->parent());
    if(w){
        int row = ui->tableWidget->currentRow();

        if(row==-1){
            return;
        }else{
        ui->tableWidget->removeRow(row);
        musey.del(row);
        update_table();}

    }
}

void MainWindow::on_edit_triggered()
{
    QWidget *w = qobject_cast<QWidget *>(sender()->parent());
    if(w){
        int row = ui->tableWidget->currentRow();
        if(row==-1){
            return;
        }else{
        Editor edit;
        edit.addData(musey.getName(row),musey.getAddress(row),musey.getDate(row),musey.getDescription(row));
        if(edit.exec()){
            edit.getValues();
            if(edit.checkDate()){
                QMessageBox::critical(this,"Ошибка","Вы пропустили строчку");
            }
            else{
            musey.edit(row,edit.name,edit.address,edit.date,edit.description);
            update_table();
            }}

        }

}
    else{
        return;
    }
}

void MainWindow::on_find_clicked()
{
    QString text = ui->findEdit->text();
    int index;
    for(int i=0;i<musey.size();i++){
        if(musey.getName(i)==text){
            index= i;
        }else if(musey.getAddress(i)==text){
            index= i;
        }else if(musey.getDate(i)==text){
            index= i;
        }else if(musey.getDescription(i)==text){
            index= i;
        }
        else{
            index= -1;
        }


    if(index==-1){

    }else{


    QWidget *w = qobject_cast<QWidget *>(sender()->parent());
    if(index>=0){

        Editor edit;
        edit.addData(musey.getName(index),musey.getAddress(index),musey.getDate(index),musey.getDescription(index));
        if(edit.exec()){
            edit.getValues();
            if(edit.checkDate()){
                QMessageBox::critical(this,"Ошибка","Вы пропустили строчку");
            }
            else{
            musey.edit(index,edit.name,edit.address,edit.date,edit.description);
            update_table();
            }

        }
        }
    }//страшно
}
}


void MainWindow::on_save_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить");
    DataBase* dataBase = new DataBase();
    dataBase->open(fileName);
    dataBase->add(musey);


}

void MainWindow::on_open_triggered()
{

    QString filename = QFileDialog::getOpenFileName(this, "Открыть");
    DataBase* dataBase = new DataBase();
    dataBase->open(filename);
    musey = dataBase->read();

    update_table();


}
//настройки
void MainWindow::on_settings_triggered()
{
    Setting setting;
    if(setting.exec()){


        }
}
