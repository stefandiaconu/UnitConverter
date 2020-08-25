#ifndef MOMENTOFFORCE_H
#define MOMENTOFFORCE_H

#include <vector>
#include <QString>
#include <QStringList>

class MomentOfForce
{
public:
    MomentOfForce();

    std::vector<std::pair<QString, double>> fillMomentOfForce();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // MOMENTOFFORCE_H
