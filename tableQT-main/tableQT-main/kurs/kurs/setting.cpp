#include "setting.h"
#include "ui_setting.h"
#include"tablesetting.h"
#include<QDebug>
Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_commandLinkButton_clicked()
{
    TableSetting tableSetting;
    if(tableSetting.exec()){
        nameColumnAdd = tableSetting.nameColumnAdd;
    }
    }




void Setting::on_buttonBox_accepted()
{
    if(nameColumnAdd.isEmpty()){
        qDebug()<<nameColumnAdd;
        qDebug()<<"nameColumnAdd";
    }
}
