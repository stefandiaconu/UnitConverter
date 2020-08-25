#include "velocityangular.h"

VelocityAngular::VelocityAngular()
{

}

std::vector<std::pair<QString, double>> VelocityAngular::fillVelocityAngular()
{
    std::vector<std::pair<QString, double>> velocityAngularVector;

    velocityAngularVector.push_back(std::make_pair("radian/second [rad/s]", 202005700.46231));
    velocityAngularVector.push_back(std::make_pair("radian/day [rad/d]", 17453292519943));
    velocityAngularVector.push_back(std::make_pair("radian/hour [rad/h]", 727220521664.3));
    velocityAngularVector.push_back(std::make_pair("radian/minute [rad/min]", 12120342027.738));
    velocityAngularVector.push_back(std::make_pair("degree/day [°/d]", 1.0E+15));
    velocityAngularVector.push_back(std::make_pair("degree/hour [°/h]", 41666666666667));
    velocityAngularVector.push_back(std::make_pair("degree/minute [°/min]", 694444444444.44));
    velocityAngularVector.push_back(std::make_pair("degree/second [°/s]", 11574074074.074));
    velocityAngularVector.push_back(std::make_pair("revolution/day [r/d]", 2777777777777.8));
    velocityAngularVector.push_back(std::make_pair("revolution/hour [r/h]", 115740740740.74));
    velocityAngularVector.push_back(std::make_pair("revolution/minute [r/min]", 1929012345.679));
    velocityAngularVector.push_back(std::make_pair("revolution/second [r/s]", 32150205.761317));

    return velocityAngularVector;
}

QStringList VelocityAngular::getKey()
{
    QStringList velocityAngularList;

    for (auto iter : this->fillVelocityAngular()) {

        velocityAngularList.append(iter.first);
    }

    return velocityAngularList;
}

double VelocityAngular::getValue(const int &arg1, const int &arg2)
{
    return this->fillVelocityAngular()[arg2].second / this->fillVelocityAngular()[arg1].second;
}
