#include "speed.h"

Speed::Speed()
{

}

std::vector<std::pair<QString, double>> Speed::fillSpeed()
{
    std::vector<std::pair<QString, double>> speedVector;

    speedVector.push_back(std::make_pair("meter/second [m/s]", 2777777777777.8));
    speedVector.push_back(std::make_pair("kilometer/hour [km/h]", 10000000000000));
    speedVector.push_back(std::make_pair("mile/hour [mi/h]", 6213711922373.3));
    speedVector.push_back(std::make_pair("meter/hour [m/h]", 1.0E+16));
    speedVector.push_back(std::make_pair("meter/minute [m/min]", 1.6666666666667E+14));
    speedVector.push_back(std::make_pair("kilometer/minute [km/min]", 166666666666.67));
    speedVector.push_back(std::make_pair("kilometer/second [km/s]", 2777777777.7778));
    speedVector.push_back(std::make_pair("centimeter/hour [cm/h]", 1.0E+18));
    speedVector.push_back(std::make_pair("centimeter/minute [cm/min]", 1.6666666666667E+16));
    speedVector.push_back(std::make_pair("centimeter/second [cm/s]", 2.7777777777778E+14));
    speedVector.push_back(std::make_pair("millimeter/hour [mm/h]", 1.0E+19));
    speedVector.push_back(std::make_pair("millimeter/minute [mm/min]", 1.6666666666667E+17));
    speedVector.push_back(std::make_pair("millimeter/second [mm/s]", 2.7777777777778E+15));
    speedVector.push_back(std::make_pair("foot/hour [ft/h]", 3.2808398950131E+16));
    speedVector.push_back(std::make_pair("foot/minute [ft/min]", 5.4680664916885E+14));
    speedVector.push_back(std::make_pair("foot/second [ft/s]", 9113444152814.2));
    speedVector.push_back(std::make_pair("yard/hour [yd/h]", 1.0936132983377E+16));
    speedVector.push_back(std::make_pair("yard/minute [yd/min]", 1.8226888305628E+14));
    speedVector.push_back(std::make_pair("yard/second [yd/s]", 3037814717604.7));
    speedVector.push_back(std::make_pair("mile/minute [mi/min]", 103561865372.89));
    speedVector.push_back(std::make_pair("mile/second [mi/s]", 1726031089.5482));
    speedVector.push_back(std::make_pair("knot [kt; kn]", 5399568034557.2));
    speedVector.push_back(std::make_pair("knot (UK) [kt (UK)]", 5396118248376.8));
    speedVector.push_back(std::make_pair("Velocity of light in vacuum", 9265.6693110598));
    speedVector.push_back(std::make_pair("Cosmic velocity - first", 351617440.22504));
    speedVector.push_back(std::make_pair("Cosmic velocity - second", 248015873.01587));
    speedVector.push_back(std::make_pair("Cosmic velocity - third", 166633339.99867));
    speedVector.push_back(std::make_pair("Earth's velocity", 93323627.676055));
    speedVector.push_back(std::make_pair("Velocity of sound in pure water", 1873459079.907));
    speedVector.push_back(std::make_pair("Velocity of sound in sea water (20°C; 10 meter deep)", 1825563734.0811));
    speedVector.push_back(std::make_pair("Mach (20°C; 1 atm)", 8084335790.9714));
    speedVector.push_back(std::make_pair("Mach (SI standard)", 9414715033.89));

    return speedVector;
}

QStringList Speed::getKey()
{
    QStringList speedList;

    for (auto iter : this->fillSpeed()) {

        speedList.append(iter.first);
    }

    return speedList;
}

double Speed::getValue(const int &arg1, const int &arg2)
{
    return this->fillSpeed()[arg2].second / this->fillSpeed()[arg1].second;
}
