#ifndef EDITOR_H
#define EDITOR_H

#include <QDialog>

namespace Ui {
class Editor;
}

class Editor : public QDialog
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();
    QString name;
    QString address;
    QString date;
    QString description;
    void getValues();
    void addData(QString name,QString address,QString date,QString description);
    bool checkDate();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
