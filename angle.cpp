#include "angle.h"

Angle::Angle()
{

}

std::vector<std::pair<QString, double>> Angle::fillAngle()
{
    std::vector<std::pair<QString, double>> angleVector;

    angleVector.push_back(std::make_pair("degree [°]", 100000000000));
    angleVector.push_back(std::make_pair("radian [rad]", 1745329251.9943));
    angleVector.push_back(std::make_pair("grad [^g]", 111111111111.11));
    angleVector.push_back(std::make_pair("minute [']", 6000000000000));
    angleVector.push_back(std::make_pair("second [\"]", 3.6E+14));
    angleVector.push_back(std::make_pair("gon", 111111111111.11));
    angleVector.push_back(std::make_pair("sign", 3333333333.3333));
    angleVector.push_back(std::make_pair("mil", 1777777777777.8));
    angleVector.push_back(std::make_pair("revolution [r]", 277777777.77778));
    angleVector.push_back(std::make_pair("circle", 277777777.77778));
    angleVector.push_back(std::make_pair("turn", 277777777.77778));
    angleVector.push_back(std::make_pair("quadrant", 1111111111.1111));
    angleVector.push_back(std::make_pair("right angle", 1111111111.1111));
    angleVector.push_back(std::make_pair("sextant", 1666666666.6667));

    return angleVector;
}

QStringList Angle::getKey()
{
    QStringList angleList;

    for (auto iter : this->fillAngle()) {

        angleList.append(iter.first);
    }

    return angleList;
}

double Angle::getValue(const int &arg1, const int &arg2)
{
    return this->fillAngle()[arg2].second / this->fillAngle()[arg1].second;
}
