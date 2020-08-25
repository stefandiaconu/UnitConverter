#ifndef FORCE_H
#define FORCE_H

#include <vector>
#include <QString>
#include <QStringList>

class Force
{
public:
    Force();

    std::vector<std::pair<QString, double>> fillForce();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // FORCE_H
