#include "power.h"

Power::Power()
{

}

std::vector<std::pair<QString, double>> Power::fillPower()
{
    std::vector<std::pair<QString, double>> powerVector;

    powerVector.push_back(std::make_pair("watt [W]", 1.0E+18));
    powerVector.push_back(std::make_pair("exawatt [EW]", 1));
    powerVector.push_back(std::make_pair("petawatt [PW]", 1000));
    powerVector.push_back(std::make_pair("terawatt [TW]", 1000000));
    powerVector.push_back(std::make_pair("gigawatt [GW]", 1000000000));
    powerVector.push_back(std::make_pair("megawatt [MW]", 1000000000000));
    powerVector.push_back(std::make_pair("kilowatt [kW]", 1.0E+15));
    powerVector.push_back(std::make_pair("kilowatt [kW]", 1.0E+15));
    powerVector.push_back(std::make_pair("hectowatt [hW]", 1.0E+16));
    powerVector.push_back(std::make_pair("dekawatt [daW]", 1.0E+17));
    powerVector.push_back(std::make_pair("deciwatt [dW]", 1.0E+19));
    powerVector.push_back(std::make_pair("centiwatt [cW]", 1.0E+20));
    powerVector.push_back(std::make_pair("milliwatt [mW]", 1.0E+21));
    powerVector.push_back(std::make_pair("microwatt [µW]", 1.0E+24));
    powerVector.push_back(std::make_pair("nanowatt [nW]", 1.0E+27));
    powerVector.push_back(std::make_pair("picowatt [pW]", 1.0E+30));
    powerVector.push_back(std::make_pair("femtowatt [fW]", 1.0E+33));
    powerVector.push_back(std::make_pair("attowatt [aW]", 0));
    powerVector.push_back(std::make_pair("horsepower [hp; hp (UK)]", 1.341022089595E+15));
    powerVector.push_back(std::make_pair("horsepower (550 ft*lbf/s)", 1.341022089595E+15));
    powerVector.push_back(std::make_pair("horsepower (metric)", 1.3596216173039E+15));
    powerVector.push_back(std::make_pair("horsepower (boiler)", 1.0194199500484E+14));
    powerVector.push_back(std::make_pair("horsepower (electric)", 1.3404825737265E+15));
    powerVector.push_back(std::make_pair("horsepower (water)", 1.3404053117582E+15));
    powerVector.push_back(std::make_pair("pferdestarke (ps)", 1.3596216173039E+15));
    powerVector.push_back(std::make_pair("Btu (IT)/hour [Btu/h]", 3.4121416331279E+18));
    powerVector.push_back(std::make_pair("Btu (IT)/minute [Btu/min]", 5.6869027218799E+16));
    powerVector.push_back(std::make_pair("Btu (IT)/second [Btu/s]", 9.4781712031332E+14));
    powerVector.push_back(std::make_pair("Btu (th)/hour [Btu (th)/h]", 3.41442594972E+18));
    powerVector.push_back(std::make_pair("Btu (th)/minute", 5.6907099162E+16));
    powerVector.push_back(std::make_pair("Btu (th)/second [Btu (th)/s]", 9.484516527E+14));
    powerVector.push_back(std::make_pair("MBtu (IT)/hour [MBtu/h]", 3412141633127.9));
    powerVector.push_back(std::make_pair("MBH", 3.4121416331279E+15));
    powerVector.push_back(std::make_pair("ton (refrigeration)", 2.84345136094E+14));
    powerVector.push_back(std::make_pair("kilocalorie (IT)/hour [kcal/h]", 8.5984522785898E+17));
    powerVector.push_back(std::make_pair("kilocalorie (IT)/minute", 1.433075379765E+16));
    powerVector.push_back(std::make_pair("kilocalorie (IT)/second", 2.388458966275E+14));
    powerVector.push_back(std::make_pair("kilocalorie (th)/hour", 8.604206500956E+17));
    powerVector.push_back(std::make_pair("kilocalorie (th)/minute", 1.434034416826E+16));
    powerVector.push_back(std::make_pair("kilocalorie (th)/second", 2.3900573613767E+14));
    powerVector.push_back(std::make_pair("calorie (IT)/hour [cal/h]", 8.5984522785898E+20));
    powerVector.push_back(std::make_pair("calorie (IT)/minute [cal/min]", 1.433075379765E+19));
    powerVector.push_back(std::make_pair("calorie (IT)/second [cal/s]", 2.388458966275E+17));
    powerVector.push_back(std::make_pair("calorie (th)/hour [cal (th)/h]", 8.604206500956E+20));
    powerVector.push_back(std::make_pair("calorie (th)/minute", 1.434034416826E+19));
    powerVector.push_back(std::make_pair("calorie (th)/second", 2.3900573613767E+17));
    powerVector.push_back(std::make_pair("foot pound-force/hour", 2.655223737402E+21));
    powerVector.push_back(std::make_pair("foot pound-force/minute", 4.42537289567E+19));
    powerVector.push_back(std::make_pair("foot pound-force/second", 7.3756214927833E+17));
    powerVector.push_back(std::make_pair("pound-foot/hour [lbf*ft/h]", 2.655223737402E+21));
    powerVector.push_back(std::make_pair("pound-foot/minute", 4.42537289567E+19));
    powerVector.push_back(std::make_pair("pound-foot/second", 7.3756214927833E+17));
    powerVector.push_back(std::make_pair("erg/second [erg/s]", 1.0E+25));
    powerVector.push_back(std::make_pair("kilovolt ampere [kV*A]", 1.0E+15));
    powerVector.push_back(std::make_pair("volt ampere [V*A]", 1.0E+18));
    powerVector.push_back(std::make_pair("newton meter/second", 1.0E+18));
    powerVector.push_back(std::make_pair("joule/second [J/s]", 1.0E+18));
    powerVector.push_back(std::make_pair("exajoule/second [EJ/s]", 1));
    powerVector.push_back(std::make_pair("petajoule/second [PJ/s]", 1000));
    powerVector.push_back(std::make_pair("terajoule/second [TJ/s]", 1000000));
    powerVector.push_back(std::make_pair("gigajoule/second [GJ/s]", 1000000000));
    powerVector.push_back(std::make_pair("megajoule/second [MJ/s]", 1000000000000));
    powerVector.push_back(std::make_pair("kilojoule/second [kJ/s]", 1.0E+15));
    powerVector.push_back(std::make_pair("hectojoule/second [hJ/s]", 1.0E+16));
    powerVector.push_back(std::make_pair("dekajoule/second [daJ/s]", 1.0E+17));
    powerVector.push_back(std::make_pair("decijoule/second [dJ/s]", 1.0E+19));
    powerVector.push_back(std::make_pair("centijoule/second [cJ/s]", 1.0E+20));
    powerVector.push_back(std::make_pair("millijoule/second [mJ/s]", 1.0E+21));
    powerVector.push_back(std::make_pair("microjoule/second [µJ/s]", 1.0E+24));
    powerVector.push_back(std::make_pair("nanojoule/second [nJ/s]", 1.0E+27));
    powerVector.push_back(std::make_pair("picojoule/second [pJ/s]", 1.0E+30));
    powerVector.push_back(std::make_pair("femtojoule/second [fJ/s]", 1.0E+33));
    powerVector.push_back(std::make_pair("attojoule/second [aJ/s]", 1.0E+36));
    powerVector.push_back(std::make_pair("joule/hour [J/h]", 3.6E+21));
    powerVector.push_back(std::make_pair("joule/minute [J/min]", 6.0E+19));
    powerVector.push_back(std::make_pair("kilojoule/hour [kJ/h]", 3.6E+18));
    powerVector.push_back(std::make_pair("kilojoule/minute [kJ/min]", 6.0E+16));

    return powerVector;
}

QStringList Power::getKey()
{
    QStringList powerList;

    for (auto iter : this->fillPower()) {

        powerList.append(iter.first);
    }

    return powerList;
}

double Power::getValue(const int &arg1, const int &arg2)
{
    return this->fillPower()[arg2].second / this->fillPower()[arg1].second;
}
