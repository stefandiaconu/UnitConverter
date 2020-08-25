#ifndef PRESSURE_H
#define PRESSURE_H

#include <vector>
#include <QString>
#include <QStringList>

class Pressure
{
public:
    Pressure();

    std::vector<std::pair<QString, double>> fillPressure();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // PRESSURE_H
