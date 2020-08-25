#ifndef LENGTH_H
#define LENGTH_H

#include <vector>
#include <QString>
#include <QStringList>

class Length
{
public:
    Length();

    std::vector<std::pair<QString, double>> fillLength();
    QStringList getKey();
    double getValue(const int &arg1, const int &arg2);
};

#endif // LENGTH_H
