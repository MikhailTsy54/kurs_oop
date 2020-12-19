#include "addtable.h"
#include "ui_addtable.h"

AddTable::AddTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTable)
{
    ui->setupUi(this);
}

AddTable::~AddTable()
{
    delete ui;
}

void AddTable::getVal()
{
    nameColumn = ui->label->text();
}



void AddTable::on_pushButton_clicked()
{

    this->close();
}
