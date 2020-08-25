#ifndef VELOCITYANGULAR_H
#define VELOCITYANGULAR_H

#include <vector>
#include <QString>
#include <QStringList>

class VelocityAngular
{
public:
    VelocityAngular();

    std::vector<std::pair<QString, double>> fillVelocityAngular();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // VELOCITYANGULAR_H
