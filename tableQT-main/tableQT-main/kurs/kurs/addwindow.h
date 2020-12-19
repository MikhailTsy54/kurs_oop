#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();
    QString name;
    QString address;
    QString date;
    QString description;
    void getValues();
    bool checkDate();

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
