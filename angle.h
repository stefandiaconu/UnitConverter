#ifndef ANGLE_H
#define ANGLE_H

#include <vector>
#include <QString>
#include <QStringList>

class Angle
{
public:
    Angle();

    std::vector<std::pair<QString, double>> fillAngle();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // ANGLE_H
