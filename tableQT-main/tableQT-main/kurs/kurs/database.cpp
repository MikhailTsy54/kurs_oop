#include "database.h"

#include <QFile>
#include <QTextStream>
#include <QFileDialog>

DataBase::DataBase()
{

}

void DataBase::save(Date *date)
{


}

void DataBase::add(Date date)
{
    QFile file(filename);
          if(file.open(QIODevice::WriteOnly | QIODevice::Text))
          {

              QTextStream stream(&file);
              for (int i = 0; i < date.size(); i++) {
              stream << date.getName(i)<<";";
              stream << date.getAddress(i)<<";";
              stream << date.getDate(i)<<";";
              stream << date.getDescription(i)<<";";
              stream<<"\n";
}
              file.close();
          }
}

Date DataBase::read()
{
    Date date;
    QFile file(filename);
        // окрываем файл для чтения
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            int i=0;


                   while (!in.atEnd())
                   {
                       QString text = in.readLine();
                      if (!text.isEmpty())
                      {
                          QStringList line = text.split(';');
                          date.add(line[0],line[1],line[2],line[3]);

                      }
                      i++;
                   }
                   file.close();

        }
          // закрываем файл
    return date;

}

void DataBase::open(QString filename)
{
    this->filename=filename;
}


