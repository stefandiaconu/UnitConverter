#ifndef SPEED_H
#define SPEED_H

#include <vector>
#include <QString>
#include <QStringList>

class Speed
{
public:
    Speed();

    std::vector<std::pair<QString, double>> fillSpeed();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // SPEED_H
