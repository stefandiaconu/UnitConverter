#include "accelerationangular.h"

AccelerationAngular::AccelerationAngular()
{

}

std::vector<std::pair<QString, double>> AccelerationAngular::fillAccelerationAngular()
{
    std::vector<std::pair<QString, double>> accelerationAngularVector;

    accelerationAngularVector.push_back(std::make_pair("radian/square second", 100));
    accelerationAngularVector.push_back(std::make_pair("radian/square minute", 360000));
    accelerationAngularVector.push_back(std::make_pair("revolution/square second", 15.91549431));
    accelerationAngularVector.push_back(std::make_pair("revolution/minute/second", 954.9296586));
    accelerationAngularVector.push_back(std::make_pair("revolution/square minute", 57295.77952));

    return accelerationAngularVector;
}

QStringList AccelerationAngular::getKey()
{
    QStringList accelerationAngularList;

    for (auto iter : this->fillAccelerationAngular()) {

        accelerationAngularList.append(iter.first);
    }

    return accelerationAngularList;
}

double AccelerationAngular::getValue(const int &arg1, const int &arg2)
{
    return this->fillAccelerationAngular()[arg2].second / this->fillAccelerationAngular()[arg1].second;
}
