#ifndef DATE_H
#define DATE_H


#define DATE_H
#include <QVector>
#include<QString>

using namespace std;
class Date
{
public:
    Date();
    QString getName(int i);
    QString getAddress(int i);
    QString getDate(int i);
    QString getDescription(int i);
    void setName(int i, QString name);
    void setAddress(int i, QString address);
    void setDate(int i, QString date);
    void setDescription(int i, QString description);
    int size();
    void del(int i);
    void edit(int i,QString name, QString address, QString date, QString description);


    void add(QString name, QString address, QString date, QString description);
private:
    QVector<QString> names;
    QVector<QString>address;
    QVector<QString>date;
    QVector<QString>description;
    void addName(QString name);
    void addAddress(QString address);
    void addDate(QString date);
    void addDescriotion(QString description);
};

#endif // DATE_H
