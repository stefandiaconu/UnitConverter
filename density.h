#ifndef DENSITY_H
#define DENSITY_H

#include <vector>
#include <QString>
#include <QStringList>

class Density
{
public:
    Density();

    std::vector<std::pair<QString, double>> fillDensity();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // DENSITY_H
