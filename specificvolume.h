#ifndef SPECIFICVOLUME_H
#define SPECIFICVOLUME_H

#include <vector>
#include <QString>
#include <QStringList>

class SpecificVolume
{
public:
    SpecificVolume();

    std::vector<std::pair<QString, double>> fillSpecificVolume();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // SPECIFICVOLUME_H
