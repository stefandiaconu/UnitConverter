#ifndef TIMECONVERT_H
#define TIMECONVERT_H

#include <vector>
#include <string>
#include <QString>
#include <QStringList>

class TimeConvert
{
public:
    TimeConvert();

    std::vector<std::pair<QString, double>> fillTime();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // TIMECONVERT_H
