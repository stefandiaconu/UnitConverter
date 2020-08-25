#include "force.h"

Force::Force()
{

}

std::vector<std::pair<QString, double>> Force::fillForce()
{
    std::vector<std::pair<QString, double>> forceVector;

    forceVector.push_back(std::make_pair("newton [N]", 1.0E+18));
    forceVector.push_back(std::make_pair("kilonewton [kN]", 1.0E+15));
    forceVector.push_back(std::make_pair("gram-force [gf]", 1.0197162129779E+20));
    forceVector.push_back(std::make_pair("kilogram-force [kgf]", 1.0197162129779E+17));
    forceVector.push_back(std::make_pair("ton-force (metric) [tf]", 1.0197162129779E+14));
    forceVector.push_back(std::make_pair("exanewton [EN]", 1));
    forceVector.push_back(std::make_pair("petanewton [PT]", 1000));
    forceVector.push_back(std::make_pair("teranewton [TN]", 1000000));
    forceVector.push_back(std::make_pair("giganewton [GN]", 1000000000));
    forceVector.push_back(std::make_pair("meganewton [MN]", 1000000000000));
    forceVector.push_back(std::make_pair("hectonewton [hN]", 1.0E+16));
    forceVector.push_back(std::make_pair("dekanewton [daN]", 1.0E+17));
    forceVector.push_back(std::make_pair("decinewton [dN]", 1.0E+19));
    forceVector.push_back(std::make_pair("centinewton [cN]", 1.0E+20));
    forceVector.push_back(std::make_pair("millinewton [mN]", 1.0E+21));
    forceVector.push_back(std::make_pair("micronewton [µN]", 1.0E+24));
    forceVector.push_back(std::make_pair("nanonewton [nN]", 1.0E+27));
    forceVector.push_back(std::make_pair("piconewton [pN]", 1.0E+30));
    forceVector.push_back(std::make_pair("femtonewton [fN]", 1.0E+33));
    forceVector.push_back(std::make_pair("attonewton [aN]", 1.0E+36));
    forceVector.push_back(std::make_pair("dyne [dyn]", 1.0E+23));
    forceVector.push_back(std::make_pair("joule/meter [J/m]", 1.0E+18));
    forceVector.push_back(std::make_pair("joule/centimeter [J/cm]", 1.0E+20));
    forceVector.push_back(std::make_pair("ton-force (short)", 1.1240447154986E+14));
    forceVector.push_back(std::make_pair("ton-force (long) [tonf (UK)]", 1.003611353125E+14));
    forceVector.push_back(std::make_pair("kip-force [kipf]", 2.248089431E+14));
    forceVector.push_back(std::make_pair("kilopound-force [kipf]", 2.248089431E+14));
    forceVector.push_back(std::make_pair("pound-force [lbf]", 2.248089431E+17));
    forceVector.push_back(std::make_pair("ounce-force [ozf]", 3.5969430896E+18));
    forceVector.push_back(std::make_pair("poundal [pdl]", 7.2330138512099E+18));
    forceVector.push_back(std::make_pair("pound foot/square second", 7.2330138512099E+18));
    forceVector.push_back(std::make_pair("pond [p]", 1.0197162129779E+20));
    forceVector.push_back(std::make_pair("kilopond [kp]", 1.0197162129779E+17));

    return forceVector;
}

QStringList Force::getKey()
{
    QStringList forceList;

    for (auto iter : this->fillForce()) {

        forceList.append(iter.first);
    }

    return forceList;
}

double Force::getValue(const int &arg1, const int &arg2)
{
    return this->fillForce()[arg2].second / this->fillForce()[arg1].second;
}
