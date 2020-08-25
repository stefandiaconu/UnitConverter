#include "momentofinertia.h"

MomentOfInertia::MomentOfInertia()
{

}

std::vector<std::pair<QString, double>> MomentOfInertia::fillMomentOfInertia()
{
    std::vector<std::pair<QString, double>> momentOfInertiaVector;

    momentOfInertiaVector.push_back(std::make_pair("kilogram square meter", 100));
    momentOfInertiaVector.push_back(std::make_pair("kilogram square centimeter", 1000000));
    momentOfInertiaVector.push_back(std::make_pair("kilogram square millimeter", 100000000));
    momentOfInertiaVector.push_back(std::make_pair("gram square centimeter", 1000000000));
    momentOfInertiaVector.push_back(std::make_pair("gram square millimeter", 100000000000));
    momentOfInertiaVector.push_back(std::make_pair("kilogram-force meter square second", 10.19716213));
    momentOfInertiaVector.push_back(std::make_pair("kilogram-force centimeter square second", 1019.716213));
    momentOfInertiaVector.push_back(std::make_pair("ounce square inch [oz*in^2]", 5467474.983));
    momentOfInertiaVector.push_back(std::make_pair("ounce-force inch sq. second", 14161.19312));
    momentOfInertiaVector.push_back(std::make_pair("pound square foot [lb*ft^2]", 2373.0360404232));
    momentOfInertiaVector.push_back(std::make_pair("pound-force foot sq. second", 73.75621419));
    momentOfInertiaVector.push_back(std::make_pair("pound square inch [lb*in^2]", 341717.18982094));
    momentOfInertiaVector.push_back(std::make_pair("pound-force inch sq. second", 885.0745703));
    momentOfInertiaVector.push_back(std::make_pair("slug square foot [slug*ft^2]", 73.75621419));

    return momentOfInertiaVector;
}

QStringList MomentOfInertia::getKey()
{
    QStringList momentOfInertiaList;

    for (auto iter : this->fillMomentOfInertia()) {

        momentOfInertiaList.append(iter.first);
    }

    return momentOfInertiaList;
}

double MomentOfInertia::getValue(const int &arg1, const int &arg2)
{
    return this->fillMomentOfInertia()[arg2].second / this->fillMomentOfInertia()[arg1].second;
}
