#ifndef AREA_H
#define AREA_H

#include <vector>
#include <QString>
#include <QStringList>

class Area
{
public:
    Area();

    std::vector<std::pair<QString, double>> fillArea();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // AREA_H
