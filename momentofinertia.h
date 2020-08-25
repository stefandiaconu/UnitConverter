#ifndef MOMENTOFINERTIA_H
#define MOMENTOFINERTIA_H

#include <vector>
#include <QString>
#include <QStringList>

class MomentOfInertia
{
public:
    MomentOfInertia();

    std::vector<std::pair<QString, double>> fillMomentOfInertia();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // MOMENTOFINERTIA_H
