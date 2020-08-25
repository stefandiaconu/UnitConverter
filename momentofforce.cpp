#include "momentofforce.h"

MomentOfForce::MomentOfForce()
{

}

std::vector<std::pair<QString, double>> MomentOfForce::fillMomentOfForce()
{
    std::vector<std::pair<QString, double>> momentOfForceVector;

    momentOfForceVector.push_back(std::make_pair("newton meter [N*m]", 1000));
    momentOfForceVector.push_back(std::make_pair("kilonewton meter [kN*m]", 1));
    momentOfForceVector.push_back(std::make_pair("millinewton meter [mN*m]", 1000000));
    momentOfForceVector.push_back(std::make_pair("micronewton meter [µN*m]", 1000000000));
    momentOfForceVector.push_back(std::make_pair("ton-force (short) meter", 0.1124045123667));
    momentOfForceVector.push_back(std::make_pair("ton-force (long) meter", 0.100361099235));
    momentOfForceVector.push_back(std::make_pair("ton-force (metric) meter", 0.1019716212978));
    momentOfForceVector.push_back(std::make_pair("kilogram-force meter [kgf*m]", 101.9716212978));
    momentOfForceVector.push_back(std::make_pair("gram-force centimeter", 10197162.12978));
    momentOfForceVector.push_back(std::make_pair("pound-force foot [lbf*ft]", 737.5610331755));
    momentOfForceVector.push_back(std::make_pair("poundal foot [pdl*ft]", 23730.36608836));
    momentOfForceVector.push_back(std::make_pair("poundal inch [pdl*in]", 284764.3930603));

    return momentOfForceVector;
}

QStringList MomentOfForce::getKey()
{
    QStringList momentOfForceList;

    for (auto iter : this->fillMomentOfForce()) {

        momentOfForceList.append(iter.first);
    }

    return momentOfForceList;
}

double MomentOfForce::getValue(const int &arg1, const int &arg2)
{
    return this->fillMomentOfForce()[arg2].second / this->fillMomentOfForce()[arg1].second;
}
