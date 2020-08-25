#ifndef VOLUMEDRY_H
#define VOLUMEDRY_H

#include <vector>
#include <QString>
#include <QStringList>

class VolumeDry
{
public:
    VolumeDry();

    std::vector<std::pair<QString, double>> fillVolumeDry();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // VOLUMEDRY_H
