#ifndef TORQUE_H
#define TORQUE_H

#include <vector>
#include <QString>
#include <QStringList>

class Torque
{
public:
    Torque();

    std::vector<std::pair<QString, double>> fillTorque();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // TORQUE_H
