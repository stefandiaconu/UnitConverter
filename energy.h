#ifndef ENERGY_H
#define ENERGY_H

#include <vector>
#include <QString>
#include <QStringList>

class Energy
{
public:
    Energy();

    std::vector<std::pair<QString, double>> fillEnergy();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // ENERGY_H
