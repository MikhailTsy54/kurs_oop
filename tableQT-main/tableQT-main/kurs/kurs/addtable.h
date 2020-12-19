#ifndef ADDTABLE_H
#define ADDTABLE_H

#include <QDialog>
#include<QString>
namespace Ui {
class AddTable;
}

class AddTable : public QDialog
{
    Q_OBJECT

public:
    explicit AddTable(QWidget *parent = nullptr);
    ~AddTable();
    QString nameColumn;

private slots:



    void getVal();
    void on_pushButton_clicked();

private:
    Ui::AddTable *ui;
};

#endif // ADDTABLE_H
