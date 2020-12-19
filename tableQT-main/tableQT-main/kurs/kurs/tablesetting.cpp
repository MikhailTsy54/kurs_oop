#include "tablesetting.h"
#include "ui_tablesetting.h"
#include"addtable.h"
#include<QDebug>
TableSetting::TableSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableSetting)
{
    ui->setupUi(this);
}

TableSetting::~TableSetting()
{
    delete ui;
}

void TableSetting::on_addColumn_clicked()
{
    AddTable addTable;
    if(addTable.exec()){

    }
}

void TableSetting::on_pushButton_clicked()
{
    qDebug()<<nameColumnAdd;
this->close();
}
