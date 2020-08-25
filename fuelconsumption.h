#ifndef FUELCONSUMPTION_H
#define FUELCONSUMPTION_H

#include <vector>
#include <QString>
#include <QStringList>

class FuelConsumption
{
public:
    FuelConsumption();

    std::vector<std::pair<QString, double>> fillFuelConsumption();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // FUELCONSUMPTION_H
