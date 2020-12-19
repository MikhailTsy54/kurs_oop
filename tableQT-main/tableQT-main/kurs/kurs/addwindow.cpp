#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}
//Получение данных из модального окна
void AddWindow::getValues()
{
    name = ui->NameEdit->text();
    address = ui->AddressEdit->text();
    date = ui->DateEdit->text();
    description=ui->DescriptionEdit->text();
}


/*Метод для проверки того,что стоки не пустые*/
bool AddWindow::checkDate()
{
    if( name=="" || address==""||date==""||description==""){
        return true;
    }else{
        return false;
    }
}
