#ifndef VOLUME_H
#define VOLUME_H

#include <vector>
#include <QString>
#include <QStringList>

class Volume
{
public:
    Volume();

    std::vector<std::pair<QString, double>> fillVolume();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // VOLUME_H
