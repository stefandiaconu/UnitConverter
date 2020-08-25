#include "density.h"

Density::Density()
{

}

std::vector<std::pair<QString, double>> Density::fillDensity()
{
    std::vector<std::pair<QString, double>> densityVector;

    densityVector.push_back(std::make_pair("kilogram/cubic meter", 100000000000));
    densityVector.push_back(std::make_pair("gram/cubic centimeter", 100000000));
    densityVector.push_back(std::make_pair("kilogram/cubic centimeter", 100000));
    densityVector.push_back(std::make_pair("gram/cubic meter [g/m^3]", 1.0E+14));
    densityVector.push_back(std::make_pair("gram/cubic millimeter", 100000));
    densityVector.push_back(std::make_pair("milligram/cubic meter", 1.0E+17));
    densityVector.push_back(std::make_pair("milligram/cubic centimeter", 100000000000));
    densityVector.push_back(std::make_pair("milligram/cubic millimeter", 0));
    densityVector.push_back(std::make_pair("exagram/liter [Eg/L]", 1.0E-7));
    densityVector.push_back(std::make_pair("petagram/liter [Pg/L]", 0.0001));
    densityVector.push_back(std::make_pair("teragram/liter [Tg/L]", 0.1));
    densityVector.push_back(std::make_pair("gigagram/liter [Gg/L]", 100));
    densityVector.push_back(std::make_pair("megagram/liter [Mg/L]", 100000));
    densityVector.push_back(std::make_pair("kilogram/liter [kg/L]", 100000000));
    densityVector.push_back(std::make_pair("hectogram/liter [hg/L]", 1000000000));
    densityVector.push_back(std::make_pair("dekagram/liter [dag/L]", 10000000000));
    densityVector.push_back(std::make_pair("gram/liter [g/L]", 100000000000));
    densityVector.push_back(std::make_pair("decigram/liter [dg/L]", 1000000000000));
    densityVector.push_back(std::make_pair("centigram/liter [cg/L]", 10000000000000));
    densityVector.push_back(std::make_pair("milligram/liter [mg/L]", 1.0E+14));
    densityVector.push_back(std::make_pair("microgram/liter [µg/L]", 1.0E+17));
    densityVector.push_back(std::make_pair("nanogram/liter [ng/L]", 1.0E+20));
    densityVector.push_back(std::make_pair("picogram/liter [pg/L]", 1.0E+23));
    densityVector.push_back(std::make_pair("femtogram/liter [fg/L]", 1.0E+26));
    densityVector.push_back(std::make_pair("attogram/liter [ag/L]", 1.0E+29));
    densityVector.push_back(std::make_pair("pound/cubic inch [lb/in^3]", 3612729.20001));
    densityVector.push_back(std::make_pair("pound/cubic foot [lb/ft^3]", 6242796057.6173));
    densityVector.push_back(std::make_pair("pound/cubic yard [lb/yd^3]", 168555493555.59));
    densityVector.push_back(std::make_pair("pound/gallon (US)", 834540445.20315));
    densityVector.push_back(std::make_pair("pound/gallon (UK)", 1002241285.4961));
    densityVector.push_back(std::make_pair("ounce/cubic inch [oz/in^3]", 57803667.20016));
    densityVector.push_back(std::make_pair("ounce/cubic foot [oz/ft^3]", 99884736921.876));
    densityVector.push_back(std::make_pair("ounce/gallon (US)", 13352647123.25));
    densityVector.push_back(std::make_pair("ounce/gallon (UK)", 16035860567.937));
    densityVector.push_back(std::make_pair("grain/gallon (US)", 5841783116413.5));
    densityVector.push_back(std::make_pair("grain/gallon (UK)", 7015688998472.4));
    densityVector.push_back(std::make_pair("grain/cubic foot [gr/ft^3]", 43699572403301));
    densityVector.push_back(std::make_pair("ton (short)/cubic yard", 84277746.777833));
    densityVector.push_back(std::make_pair("ton (long)/cubic yard", 75247988.19446));
    densityVector.push_back(std::make_pair("slug/cubic foot [slug/ft^3]", 194032033.19797));
    densityVector.push_back(std::make_pair("psi/1000 feet", 43352750400.12));
    densityVector.push_back(std::make_pair("Earth's density (mean)", 18122508.155129));

    return densityVector;
}

QStringList Density::getKey()
{
    QStringList densityList;

    for (auto iter : this->fillDensity()) {

        densityList.append(iter.first);
    }

    return densityList;
}

double Density::getValue(const int &arg1, const int &arg2)
{
    return this->fillDensity()[arg2].second / this->fillDensity()[arg1].second;
}
