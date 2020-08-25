#include "energy.h"

Energy::Energy()
{

}

std::vector<std::pair<QString, double>> Energy::fillEnergy()
{
    std::vector<std::pair<QString, double>> energyVector;

    energyVector.push_back(std::make_pair("joule [J]", 1.0E+26));
    energyVector.push_back(std::make_pair("kilojoule [kJ]", 1.0E+23));
    energyVector.push_back(std::make_pair("kilowatt-hour [kW*h]", 2.7777777777778E+19));
    energyVector.push_back(std::make_pair("watt-hour [W*h]", 2.7777777777778E+22));
    energyVector.push_back(std::make_pair("calorie (nutritional)", 2.388458966275E+22));
    energyVector.push_back(std::make_pair("horsepower (metric) hour", 3.7767267147331E+19));
    energyVector.push_back(std::make_pair("Btu (IT) [Btu (IT); Btu]", 9.4781712031332E+22));
    energyVector.push_back(std::make_pair("Btu (th) [Btu (th)]", 9.484516527E+22));
    energyVector.push_back(std::make_pair("gigajoule [GJ]", 1.0E+17));
    energyVector.push_back(std::make_pair("megajoule [MJ]", 1.0E+20));
    energyVector.push_back(std::make_pair("millijoule [mJ]", 1.0E+29));
    energyVector.push_back(std::make_pair("microjoule [µJ]", 1.0E+32));
    energyVector.push_back(std::make_pair("nanojoule [nJ]", 1.0E+35));
    energyVector.push_back(std::make_pair("attojoule [aJ]", 1.0E+44));
    energyVector.push_back(std::make_pair("megaelectron-volt [MeV]", 6.241506363094E+38));
    energyVector.push_back(std::make_pair("kiloelectron-volt [keV]", 6.241506363094E+41));
    energyVector.push_back(std::make_pair("electron-volt [eV]", 6.241506363094E+44));
    energyVector.push_back(std::make_pair("erg", 1.0E+33));
    energyVector.push_back(std::make_pair("gigawatt-hour [GW*h]", 27777777777778));
    energyVector.push_back(std::make_pair("megawatt-hour [MW*h]", 2.7777777777778E+16));
    energyVector.push_back(std::make_pair("kilowatt-second [kW*s]", 1.0E+23));
    energyVector.push_back(std::make_pair("watt-second [W*s]", 1.0E+26));
    energyVector.push_back(std::make_pair("newton meter [N*m]", 1.0E+26));
    energyVector.push_back(std::make_pair("horsepower hour [hp*h]", 3.725061361111E+19));
    energyVector.push_back(std::make_pair("kilocalorie (IT) [kcal (IT)]", 2.388458966275E+22));
    energyVector.push_back(std::make_pair("kilocalorie (th) [kcal (th)]", 2.3900573613767E+22));
    energyVector.push_back(std::make_pair("calorie (IT) [cal (IT); cal]", 2.388458966275E+25));
    energyVector.push_back(std::make_pair("calorie (th) [cal (th)]", 2.3900573613767E+25));
    energyVector.push_back(std::make_pair("mega Btu (IT) [MBtu (IT)]", 9.4781712031332E+16));
    energyVector.push_back(std::make_pair("ton-hour (refrigeration)", 7.898476002611E+18));
    energyVector.push_back(std::make_pair("fuel oil equivalent @kiloliter", 2.4877089772003E+15));
    energyVector.push_back(std::make_pair("fuel oil equivalent @barrel (US)", 0));
    energyVector.push_back(std::make_pair("", 1.5666398682865E+16));
    energyVector.push_back(std::make_pair("gigaton [Gton]", 23900573.613767));
    energyVector.push_back(std::make_pair("megaton [Mton]", 23900573613.767));
    energyVector.push_back(std::make_pair("kiloton [kton]", 23900573613767));
    energyVector.push_back(std::make_pair("ton (explosives)", 2.3900573613767E+16));
    energyVector.push_back(std::make_pair("dyne centimeter [dyn*cm]", 1.0E+33));
    energyVector.push_back(std::make_pair("gram-force meter [gf*m]", 1.0197162130094E+28));
    energyVector.push_back(std::make_pair("gram-force centimeter", 1.0197162130094E+30));
    energyVector.push_back(std::make_pair("kilogram-force centimeter", 1.0197162130094E+27));
    energyVector.push_back(std::make_pair("kilogram-force meter", 1.0197162130094E+25));
    energyVector.push_back(std::make_pair("kilopond meter [kp*m]", 1.0197162130094E+25));
    energyVector.push_back(std::make_pair("pound-force foot [lbf*ft]", 7.375621493E+25));
    energyVector.push_back(std::make_pair("pound-force inch [lbf*in]", 8.8507457916E+26));
    energyVector.push_back(std::make_pair("ounce-force inch [ozf*in]", 1.416119326656E+28));
    energyVector.push_back(std::make_pair("foot-pound [ft*lbf]", 7.375621493E+25));
    energyVector.push_back(std::make_pair("inch-pound [in*lbf]", 8.8507457916E+26));
    energyVector.push_back(std::make_pair("inch-ounce [in*ozf]", 1.416119326656E+28));
    energyVector.push_back(std::make_pair("poundal foot [pdl*ft]", 2.37303604571E+27));
    energyVector.push_back(std::make_pair("therm", 9.4781698791344E+17));
    energyVector.push_back(std::make_pair("therm (EC)", 9.4781698791344E+17));
    energyVector.push_back(std::make_pair("therm (US)", 9.4804342797336E+17));
    energyVector.push_back(std::make_pair("Hartree energy", 2.2937104486906E+43));
    energyVector.push_back(std::make_pair("Rydberg constant", 4.5874208973812E+43));

    return energyVector;
}

QStringList Energy::getKey()
{
    QStringList energyList;

    for (auto iter : this->fillEnergy()) {

        energyList.append(iter.first);
    }

    return energyList;
}

double Energy::getValue(const int &arg1, const int &arg2)
{
    return this->fillEnergy()[arg2].second / this->fillEnergy()[arg1].second;
}
