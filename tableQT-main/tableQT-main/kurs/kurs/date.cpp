#include "Date.h"

using namespace std;
Date::Date()
{

}

QString Date::getName(int i)
{
    return names[i];
}

QString Date::getAddress(int i)
{
    return address[i];
}

QString Date::getDate(int i)
{
    return date[i];
}

void Date::setName(int i, QString name)
{
    names[i] = name;
}

void Date::setAddress(int i, QString address)
{
    this->address[i] = address;
}

void Date::setDate(int i, QString date)
{
    this->date[i] = date;
}

void Date::setDescription(int i, QString description)
{
    this->description[i] = description;
}

int Date::size()
{
    return names.size();
}

void Date::del(int i)
{
    names.remove(i);
    this->date.remove(i);
    description.remove(i);
    address.remove(i);
}

void Date::edit(int i, QString name, QString address, QString date, QString description)
{
    names[i]=name;
    this->address[i]=address;
    this->date[i]=date;
    this->description[i]=description;
}



QString Date::getDescription(int i)
{
    return description[i];
}

void Date::addName(QString name)
{
    this->names.push_back(name);
}

void Date::addAddress(QString address)
{
    this->address.push_back(address);
}

void Date::addDate(QString date)
{
    this->date.push_back(date);
}

void Date::addDescriotion(QString description)
{
    this->description.push_back(description);
}

void Date::add(QString name, QString address, QString date, QString description)
{
    addName(name);
    addAddress(address);
    addDate(date);
    addDescriotion(description);
}
