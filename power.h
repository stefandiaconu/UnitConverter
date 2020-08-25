#ifndef POWER_H
#define POWER_H

#include <vector>
#include <QString>
#include <QStringList>

class Power
{
public:
    Power();

    std::vector<std::pair<QString, double>> fillPower();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // POWER_H
