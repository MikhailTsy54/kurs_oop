#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QDialog>
#include<QString>
namespace Ui {
class TableSetting;
}

class TableSetting : public QDialog
{
    Q_OBJECT

public:
    explicit TableSetting(QWidget *parent = nullptr);
    ~TableSetting();
    QString nameColumnAdd;

private slots:
    void on_addColumn_clicked();

    void on_pushButton_clicked();

private:
    Ui::TableSetting *ui;
};

#endif // TABLESETTING_H
