#ifndef DATABASE_H
#define DATABASE_H
#include"date.h"
#include <QTableWidget>
#include <QFileDialog>


class DataBase
{
public:
    DataBase();
    void save(Date *date);
    void add(Date date);
    Date read();
    void open(QString filename);
private:
    QString filename;

};

#endif // DATABASE_H
