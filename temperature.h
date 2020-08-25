#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <vector>
#include <QString>
#include <QStringList>

class Temperature
{
public:
    Temperature();

    std::vector<std::pair<QString, double>> fillTemperature();
    QStringList getKey();
    double getValue(const int &convertFromPos, const int &convertToPos, const int &value);
    double convertTemp(const QString &convertFrom, const QString &convertTo, const int &value);
};

#endif // TEMPERATURE_H
