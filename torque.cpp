#include "torque.h"

Torque::Torque()
{

}

std::vector<std::pair<QString, double>> Torque::fillTorque()
{
    std::vector<std::pair<QString, double>> torqueVector;

    torqueVector.push_back(std::make_pair("newton meter [N*m]", 1129848333333.3));
    torqueVector.push_back(std::make_pair("newton centimeter [N*cm]", 1.1298483333333E+14));
    torqueVector.push_back(std::make_pair("newton millimeter [N*mm]", 1.1298483333333E+15));
    torqueVector.push_back(std::make_pair("kilonewton meter [kN*m]", 1129848333.3333));
    torqueVector.push_back(std::make_pair("dyne meter [dyn*m]", 1.1298483333333E+17));
    torqueVector.push_back(std::make_pair("dyne centimeter [dyn*cm]", 1.1298483333333E+19));
    torqueVector.push_back(std::make_pair("dyne millimeter [dyn*mm]", 1.1298483333333E+20));
    torqueVector.push_back(std::make_pair("kilogram-force meter", 115212466370.61));
    torqueVector.push_back(std::make_pair("kilogram-force centimeter", 11521246637061));
    torqueVector.push_back(std::make_pair("kilogram-force millimeter", 1.1521246637061E+14));
    torqueVector.push_back(std::make_pair("gram-force meter [gf*m]", 1.1521246637061E+14));
    torqueVector.push_back(std::make_pair("gram-force centimeter", 1.1521246637061E+16));
    torqueVector.push_back(std::make_pair("gram-force millimeter", 1.1521246637061E+17));
    torqueVector.push_back(std::make_pair("ounce-force foot [ozf*ft]", 13333333490680));
    torqueVector.push_back(std::make_pair("ounce-force inch [ozf*in]", 1.6000000188816E+14));
    torqueVector.push_back(std::make_pair("pound-force foot [lbf*ft]", 833333333333.33));
    torqueVector.push_back(std::make_pair("pound-force inch [lbf*in]", 10000000000000));

    return torqueVector;
}

QStringList Torque::getKey()
{
    QStringList torqueList;

    for (auto iter : this->fillTorque()) {

        torqueList.append(iter.first);
    }

    return torqueList;
}

double Torque::getValue(const int &arg1, const int &arg2)
{
    return this->fillTorque()[arg2].second / this->fillTorque()[arg1].second;
}
