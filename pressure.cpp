#include "pressure.h"

Pressure::Pressure()
{

}

std::vector<std::pair<QString, double>> Pressure::fillPressure()
{
    std::vector<std::pair<QString, double>> pressureVector;

    pressureVector.push_back(std::make_pair("pascal [Pa]", 1.0E+18));
    pressureVector.push_back(std::make_pair("kilopascal [kPa]", 1.0E+15));
    pressureVector.push_back(std::make_pair("bar", 10000000000000));
    pressureVector.push_back(std::make_pair("psi [psi]", 1.4503773773E+14));
    pressureVector.push_back(std::make_pair("ksi [ksi]", 145037737730));
    pressureVector.push_back(std::make_pair("Standard atmosphere [atm]", 9869232667160.1));
    pressureVector.push_back(std::make_pair("exapascal [EPa]", 1));
    pressureVector.push_back(std::make_pair("petapascal [PPa]", 1000));
    pressureVector.push_back(std::make_pair("terapascal [TPa]", 1000000));
    pressureVector.push_back(std::make_pair("gigapascal [GPa]", 1000000000));
    pressureVector.push_back(std::make_pair("megapascal [MPa]", 1000000000000));
    pressureVector.push_back(std::make_pair("hectopascal [hPa]", 1.0E+16));
    pressureVector.push_back(std::make_pair("dekapascal [daPa]", 1.0E+17));
    pressureVector.push_back(std::make_pair("decipascal [dPa]", 1.0E+19));
    pressureVector.push_back(std::make_pair("centipascal [cPa]", 1.0E+20));
    pressureVector.push_back(std::make_pair("millipascal [mPa]", 1.0E+21));
    pressureVector.push_back(std::make_pair("micropascal [µPa]", 1.0E+24));
    pressureVector.push_back(std::make_pair("nanopascal [nPa]", 1.0E+27));
    pressureVector.push_back(std::make_pair("picopascal [pPa]", 1.0E+30));
    pressureVector.push_back(std::make_pair("femtopascal [fPa]", 1.0E+33));
    pressureVector.push_back(std::make_pair("attopascal [aPa]", 1.0E+36));
    pressureVector.push_back(std::make_pair("newton/square meter", 1.0E+18));
    pressureVector.push_back(std::make_pair("newton/square centimeter", 1.0E+14));
    pressureVector.push_back(std::make_pair("newton/square millimeter", 1000000000000));
    pressureVector.push_back(std::make_pair("kilonewton/square meter", 1.0E+15));
    pressureVector.push_back(std::make_pair("millibar [mbar]", 1.0E+16));
    pressureVector.push_back(std::make_pair("microbar [µbar]", 1.0E+19));
    pressureVector.push_back(std::make_pair("dyne/square centimeter", 1.0E+19));
    pressureVector.push_back(std::make_pair("kilogram-force/square meter", 1.0197162129779E+17));
    pressureVector.push_back(std::make_pair("kilogram-force/sq. cm", 10197162129779));
    pressureVector.push_back(std::make_pair("kilogram-force/sq. millimeter", 101971621297.79));
    pressureVector.push_back(std::make_pair("gram-force/sq. centimeter", 1.0197162129779E+16));
    pressureVector.push_back(std::make_pair("ton-force (short)/sq. foot", 10442717116574));
    pressureVector.push_back(std::make_pair("ton-force (short)/sq. inch", 72518868865.1));
    pressureVector.push_back(std::make_pair("ton-force (long)/square foot", 9323854568370.6));
    pressureVector.push_back(std::make_pair("ton-force (long)/square inch", 64748990058.129));
    pressureVector.push_back(std::make_pair("kip-force/square inch", 145037737730));
    pressureVector.push_back(std::make_pair("pound-force/square foot", 2.088543423312E+16));
    pressureVector.push_back(std::make_pair("pound-force/square inch", 0));
    pressureVector.push_back(std::make_pair("poundal/square foot", 6.7196897513951E+17));
    pressureVector.push_back(std::make_pair("torr [Torr]", 7.50061682704E+15));
    pressureVector.push_back(std::make_pair("centimeter mercury (0°C)", 7.5006375541921E+14));
    pressureVector.push_back(std::make_pair("millimeter mercury (0°C)", 7.5006375541921E+15));
    pressureVector.push_back(std::make_pair("inch mercury (32°F) [inHg]", 2.9530058646696E+14));
    pressureVector.push_back(std::make_pair("inch mercury (60°F) [inHg]", 2.9613397100848E+14));
    pressureVector.push_back(std::make_pair("centimeter water (4°C)", 1.0197442889221E+16));
    pressureVector.push_back(std::make_pair("millimeter water (4°C)", 1.0197442889221E+17));
    pressureVector.push_back(std::make_pair("inch water (4°C) [inAq]", 4.0147421331128E+15));
    pressureVector.push_back(std::make_pair("foot water (4°C) [ftAq]", 3.3456229215318E+14));
    pressureVector.push_back(std::make_pair("inch water (60°F) [inAq]", 4.0185980718766E+15));
    pressureVector.push_back(std::make_pair("foot water (60°F) [ftAq]", 3.3488317265639E+14));
    pressureVector.push_back(std::make_pair("atmosphere technical [at]", 10197162129779));

    return pressureVector;
}

QStringList Pressure::getKey()
{
    QStringList pressureList;

    for (auto iter : this->fillPressure()) {

        pressureList.append(iter.first);
    }

    return pressureList;
}

double Pressure::getValue(const int &arg1, const int &arg2)
{
    return this->fillPressure()[arg2].second / this->fillPressure()[arg1].second;
}
