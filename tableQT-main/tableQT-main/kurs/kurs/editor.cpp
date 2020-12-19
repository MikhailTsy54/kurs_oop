#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

//Получение данных из модального окна
void Editor::getValues()
{
    name = ui->NameEdit->text();
    address = ui->AddressEdit->text();
    date = ui->DateEdit->text();
    description=ui->DescriptionEdit->text();
}

//Добавляет данные в форму
void Editor::addData(QString name, QString address, QString date, QString description)
{
    ui->NameEdit->setText(name);
    ui->AddressEdit->setText(address);
    ui->DateEdit->setText(date);
    ui->DescriptionEdit->setText(description);
}
//Метод для проверки того,что стоки не пустые
bool Editor::checkDate()
{
    if( name=="" || address==""||date==""||description==""){
        return true;
    }else{
        return false;
    }
}
