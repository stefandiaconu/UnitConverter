#include "area.h"

Area::Area()
{

}

std::vector<std::pair<QString, double>> Area::fillArea()
{
    std::vector<std::pair<QString, double>> areaVector;

    areaVector.push_back(std::make_pair("square meter [m^2]", 1.0E+15));
    areaVector.push_back(std::make_pair("square kilometer [km^2]", 1000000000));
    areaVector.push_back(std::make_pair("square centimeter [cm^2]", 1.0E+19));
    areaVector.push_back(std::make_pair("square millimeter [mm^2]", 1.0E+21));
    areaVector.push_back(std::make_pair("square micrometer [µm^2]", 1.0E+27));
    areaVector.push_back(std::make_pair("hectare [ha]", 100000000000));
    areaVector.push_back(std::make_pair("acre [ac]", 247105381467.17));
    areaVector.push_back(std::make_pair("square mile [mi^2]", 386102158.54245));
    areaVector.push_back(std::make_pair("square yard [yd^2]", 1.1959900463011E+15));
    areaVector.push_back(std::make_pair("square foot [ft^2]", 1.076391041671E+16));
    areaVector.push_back(std::make_pair("square inch [in^2]", 1.5500031000062E+18));
    areaVector.push_back(std::make_pair("square hectometer [hm^2]", 100000000000));
    areaVector.push_back(std::make_pair("square dekameter [dam^2]", 10000000000000));
    areaVector.push_back(std::make_pair("square decimeter [dm^2]", 1.0E+17));
    areaVector.push_back(std::make_pair("square nanometer [nm^2]", 1.0E+33));
    areaVector.push_back(std::make_pair("are [a]", 10000000000000));
    areaVector.push_back(std::make_pair("barn [b]", 1.0E+43));
    areaVector.push_back(std::make_pair("square mile (US survey)", 386100614.13536));
    areaVector.push_back(std::make_pair("square foot (US survey)", 1.0763867361111E+16));
    areaVector.push_back(std::make_pair("circular inch", 1.97352524139E+18));
    areaVector.push_back(std::make_pair("township", 10725059.959512));
    areaVector.push_back(std::make_pair("section", 386102158.54245));
    areaVector.push_back(std::make_pair("acre (US survey) [ac]", 247104393046.63));
    areaVector.push_back(std::make_pair("rood", 988421525868.66));
    areaVector.push_back(std::make_pair("square chain [ch^2]", 2471053814671.6));
    areaVector.push_back(std::make_pair("square rod", 39536861034746));
    areaVector.push_back(std::make_pair("square rod (US survey)", 39536702887460));
    areaVector.push_back(std::make_pair("square perch", 39536861034746));
    areaVector.push_back(std::make_pair("square pole", 39536861034746));
    areaVector.push_back(std::make_pair("square mil [mil^2]", 1.5500031000062E+24));
    areaVector.push_back(std::make_pair("circular mil", 1.97352524139E+24));
    areaVector.push_back(std::make_pair("homestead", 1544408634.1698));
    areaVector.push_back(std::make_pair("sabin", 1.076391041671E+16));
    areaVector.push_back(std::make_pair("arpent", 247446216476.09));
    areaVector.push_back(std::make_pair("cuerda", 254427313535.39));
    areaVector.push_back(std::make_pair("plaza", 156250000000));
    areaVector.push_back(std::make_pair("varas castellanas cuad", 1.4311536386366E+15));
    areaVector.push_back(std::make_pair("varas conuqueras cuad", 1.5901707095962E+14));
    areaVector.push_back(std::make_pair("Electron cross section", 1.5032029647492E+43));

    return areaVector;
}

QStringList Area::getKey()
{
    QStringList areaList;

    for (auto iter : this->fillArea()) {

        areaList.append(iter.first);
    }

    return areaList;
}

double Area::getValue(const int &arg1, const int &arg2)
{
    return this->fillArea()[arg2].second / this->fillArea()[arg1].second;
}
