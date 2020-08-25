#ifndef ACCELERATIONANGULAR_H
#define ACCELERATIONANGULAR_H

#include <vector>
#include <QString>
#include <QStringList>

class AccelerationAngular
{
public:
    AccelerationAngular();

    std::vector<std::pair<QString, double>> fillAccelerationAngular();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // ACCELERATIONANGULAR_H
