#include "fuelconsumption.h"

FuelConsumption::FuelConsumption()
{

}

std::vector<std::pair<QString, double>> FuelConsumption::fillFuelConsumption()
{
    std::vector<std::pair<QString, double>> fuelConsumptionVector;

    fuelConsumptionVector.push_back(std::make_pair("meter/liter [m/L]", 1000000000));
    fuelConsumptionVector.push_back(std::make_pair("exameter/liter [Em/L]", 1.0E-9));
    fuelConsumptionVector.push_back(std::make_pair("petameter/liter [Pm/L]", 1.0E-6));
    fuelConsumptionVector.push_back(std::make_pair("terameter/liter [Tm/L]", 0.001));
    fuelConsumptionVector.push_back(std::make_pair("gigameter/liter [Gm/L]", 1));
    fuelConsumptionVector.push_back(std::make_pair("megameter/liter [Mm/L]", 1000));
    fuelConsumptionVector.push_back(std::make_pair("kilometer/liter [km/L]", 1000000));
    fuelConsumptionVector.push_back(std::make_pair("hectometer/liter [hm/L]", 10000000));
    fuelConsumptionVector.push_back(std::make_pair("dekameter/liter [dam/L]", 100000000));
    fuelConsumptionVector.push_back(std::make_pair("centimeter/liter [cm/L] ", 100000000000));
    fuelConsumptionVector.push_back(std::make_pair("mile (US)/liter [mi/L]", 19705));
    fuelConsumptionVector.push_back(std::make_pair("nautical mile/liter [n.mile/L]", 539594.07503258));
    fuelConsumptionVector.push_back(std::make_pair("nautical mile/gallon (US)", 2042585.7698111));
    fuelConsumptionVector.push_back(std::make_pair("kilometer/gallon (US)", 3785411.7834003));
    fuelConsumptionVector.push_back(std::make_pair("meter/gallon (US)", 3785411783.4003));
    fuelConsumptionVector.push_back(std::make_pair("meter/gallon (UK)", 4546099293.9205));
    fuelConsumptionVector.push_back(std::make_pair("mile/gallon (US)", 2352145.8329476));
    fuelConsumptionVector.push_back(std::make_pair("mile/gallon (UK)", 2824809.3627967));
    fuelConsumptionVector.push_back(std::make_pair("meter/cubic meter [m/m^3]", 1000000000000));
    fuelConsumptionVector.push_back(std::make_pair("meter/cubic centimeter", 1000000));
    fuelConsumptionVector.push_back(std::make_pair("meter/cubic yard [m/yd^3]", 764554858167.78));
    fuelConsumptionVector.push_back(std::make_pair("meter/cubic foot [m/ft^3]", 28316846593.194));
    fuelConsumptionVector.push_back(std::make_pair("meter/cubic inch [m/in^3]", 16387064.001271));
    fuelConsumptionVector.push_back(std::make_pair("meter/quart (US)", 946352946.38742));
    fuelConsumptionVector.push_back(std::make_pair("meter/quart (UK)", 1136524822.9634));
    fuelConsumptionVector.push_back(std::make_pair("meter/pint (US) [m/pt (US)]", 473176472.96982));
    fuelConsumptionVector.push_back(std::make_pair("meter/pint (UK) [m/pt (UK)]", 568262411.67548));
    fuelConsumptionVector.push_back(std::make_pair("meter/cup (US)", 236588236.48491));
    fuelConsumptionVector.push_back(std::make_pair("meter/cup (UK)", 284131205.91847));
    fuelConsumptionVector.push_back(std::make_pair("meter/fluid ounce (US)", 29573529.564112));
    fuelConsumptionVector.push_back(std::make_pair("meter/fluid ounce (UK)", 28413120.591847));
//    fuelConsumptionVector.push_back(std::make_pair("liter/meter [L/m]", 1:1.0E-9));
//    fuelConsumptionVector.push_back(std::make_pair("liter/100 km [L/100 km]", 1:0.0001));
//    fuelConsumptionVector.push_back(std::make_pair("gallon (US)/mile", 1:4.2514370749763E-7));
//    fuelConsumptionVector.push_back(std::make_pair("gallon (US)/100 mi", 1:4.2514370749763E-5));
//    fuelConsumptionVector.push_back(std::make_pair("gallon (UK)/mile", 1:3.5400618995592E-7));
//    fuelConsumptionVector.push_back(std::make_pair("gallon (UK)/100 mi", 1:3.5400618995592E-5));

    return fuelConsumptionVector;
}

QStringList FuelConsumption::getKey()
{
    QStringList fuelConsumptionList;

    for (auto iter : this->fillFuelConsumption()) {

        fuelConsumptionList.append(iter.first);
    }

    return fuelConsumptionList;
}

double FuelConsumption::getValue(const int &arg1, const int &arg2)
{
    return this->fillFuelConsumption()[arg2].second / this->fillFuelConsumption()[arg1].second;
}
