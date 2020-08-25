#ifndef ACCELERATION_H
#define ACCELERATION_H

#include <vector>
#include <QString>
#include <QStringList>

class Acceleration
{
public:
    Acceleration();

    std::vector<std::pair<QString, double>> fillAcceleration();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // ACCELERATION_H
