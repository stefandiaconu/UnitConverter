#ifndef WEIGHTANDMASS_H
#define WEIGHTANDMASS_H

#include <vector>
#include <QString>
#include <QStringList>

class WeightAndMass
{
public:
    WeightAndMass();

    std::vector<std::pair<QString, double>> fillWeightAndMass();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // WEIGHTANDMASS_H
