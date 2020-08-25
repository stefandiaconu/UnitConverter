#include "specificvolume.h"

SpecificVolume::SpecificVolume()
{

}

std::vector<std::pair<QString, double>> SpecificVolume::fillSpecificVolume()
{
    std::vector<std::pair<QString, double>> specificVolumeVector;

    specificVolumeVector.push_back(std::make_pair("cubic meter/kilogram", 1));
    specificVolumeVector.push_back(std::make_pair("cubic centimeter/gram", 1000));
    specificVolumeVector.push_back(std::make_pair("liter/kilogram [L/kg]", 1000));
    specificVolumeVector.push_back(std::make_pair("liter/gram [L/g]", 1));
    specificVolumeVector.push_back(std::make_pair("cubic foot/kilogram [ft^3/kg]", 35.31466672));
    specificVolumeVector.push_back(std::make_pair("cubic foot/pound [ft^3/lb]", 16.01846353));
    specificVolumeVector.push_back(std::make_pair("gallon (US)/pound", 119.82643593497));
    specificVolumeVector.push_back(std::make_pair("gallon (UK)/pound", 99.77637365));

    return specificVolumeVector;
}

QStringList SpecificVolume::getKey()
{
    QStringList specificVolumeList;

    for (auto iter : this->fillSpecificVolume()) {

        specificVolumeList.append(iter.first);
    }

    return specificVolumeList;
}

double SpecificVolume::getValue(const int &arg1, const int &arg2)
{
    return this->fillSpecificVolume()[arg2].second / this->fillSpecificVolume()[arg1].second;
}
