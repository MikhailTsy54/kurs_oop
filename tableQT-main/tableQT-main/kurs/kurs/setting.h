#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include<QString>
namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();
    QString nameColumnAdd;

private slots:
    void on_commandLinkButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Setting *ui;
};

#endif // SETTING_H
