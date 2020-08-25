#include "acceleration.h"

Acceleration::Acceleration()
{

}

std::vector<std::pair<QString, double>> Acceleration::fillAcceleration()
{
    std::vector<std::pair<QString, double>> accelerationVector;

    accelerationVector.push_back(std::make_pair("meter/square second", 1000));
    accelerationVector.push_back(std::make_pair("decimeter/square second", 10000));
    accelerationVector.push_back(std::make_pair("kilometer/square second", 1));
    accelerationVector.push_back(std::make_pair("hectometer/square second", 10));
    accelerationVector.push_back(std::make_pair("dekameter/square second", 100));
    accelerationVector.push_back(std::make_pair("centimeter/square second", 100000));
    accelerationVector.push_back(std::make_pair("millimeter/square second", 1000000));
    accelerationVector.push_back(std::make_pair("micrometer/square second", 1000000000));
    accelerationVector.push_back(std::make_pair("nanometer/square second", 1000000000000));
    accelerationVector.push_back(std::make_pair("picometer/square second", 1.0E+15));
    accelerationVector.push_back(std::make_pair("femtometer/square second", 1.0E+18));
    accelerationVector.push_back(std::make_pair("attometer/square second", 1.0E+21));
    accelerationVector.push_back(std::make_pair("gal [Gal]", 100000));
    accelerationVector.push_back(std::make_pair("galileo [Gal]", 100000));
    accelerationVector.push_back(std::make_pair("mile/square second [mi/s^2]", 0.62137119223733));
    accelerationVector.push_back(std::make_pair("yard/square second", 1093.6132983377));
    accelerationVector.push_back(std::make_pair("foot/square second [ft/s^2]", 3280.8398950131));
    accelerationVector.push_back(std::make_pair("inch/square second [in/s^2]", 39370.078740157));
    accelerationVector.push_back(std::make_pair("Acceleration of gravity [g]", 101.97162129779));

    return accelerationVector;
}

QStringList Acceleration::getKey()
{
    QStringList accelerationList;

    for (auto iter : this->fillAcceleration()) {

        accelerationList.append(iter.first);
    }

    return accelerationList;
}

double Acceleration::getValue(const int &arg1, const int &arg2)
{
    return this->fillAcceleration()[arg2].second / this->fillAcceleration()[arg1].second;
}
