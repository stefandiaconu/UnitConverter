#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#include <vector>
#include <QString>
#include <QStringList>

class DataStorage
{
public:
    DataStorage();

    std::vector<std::pair<QString, double>> fillDataStorage();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // DATASTORAGE_H
