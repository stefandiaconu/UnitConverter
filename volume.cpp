#include "volume.h"

Volume::Volume()
{

}

std::vector<std::pair<QString, double>> Volume::fillVolume()
{
    std::vector<std::pair<QString, double>> volumeVector;

    volumeVector.push_back(std::make_pair("cubic meter [m^3]", 10000000000));
    volumeVector.push_back(std::make_pair("cubic kilometer [km^3]", 10));
    volumeVector.push_back(std::make_pair("cubic centimeter [cm^3]", 1.0E+16));
    volumeVector.push_back(std::make_pair("cubic milimeter [mm^3]", 1.0E+19));
    volumeVector.push_back(std::make_pair("liter [L, l]", 10000000000000));
    volumeVector.push_back(std::make_pair("mililiter [mL]", 1.0E+16));
    volumeVector.push_back(std::make_pair("galon (US) [gal (US)]", 2641720523581.5));
    volumeVector.push_back(std::make_pair("quart (US) [qt (US)]", 10566882094326));
    volumeVector.push_back(std::make_pair("pint (US) [pt (US)]", 21133764188652));
    volumeVector.push_back(std::make_pair("cup (US)", 42267528377304));
    volumeVector.push_back(std::make_pair("tablespoon (US)", 6.7628045403686E+14));
    volumeVector.push_back(std::make_pair("teaspoon (US)", 2.0288413621106E+15));
    volumeVector.push_back(std::make_pair("cubic mile [mi^3]", 2.3991275857893));
    volumeVector.push_back(std::make_pair("cubic yard [yd^3]", 13079506193.144));
    volumeVector.push_back(std::make_pair("cubic foot [ft^3]", 353146667214.89));
    volumeVector.push_back(std::make_pair("cubic inch [in^3]", 6.1023744094732E+14));
    volumeVector.push_back(std::make_pair("cubic decimeter [dm^3]", 10000000000000));
    volumeVector.push_back(std::make_pair("exaliter [EL]", 1.0E-5));
    volumeVector.push_back(std::make_pair("petaliter [PL]", 0.01));
    volumeVector.push_back(std::make_pair("teraliter [TL]", 10));
    volumeVector.push_back(std::make_pair("gigaliter [GL]", 10000));
    volumeVector.push_back(std::make_pair("megaliter [ML]", 10000000));
    volumeVector.push_back(std::make_pair("kiloliter [kL]", 10000000000));
    volumeVector.push_back(std::make_pair("hectoliter [hL]", 100000000000));
    volumeVector.push_back(std::make_pair("dekaliter [daL]", 1000000000000));
    volumeVector.push_back(std::make_pair("deciliter [dL]", 1.0E+14));
    volumeVector.push_back(std::make_pair("centiliter [cL]", 1.0E+15));
    volumeVector.push_back(std::make_pair("microliter [µL]", 1.0E+19));
    volumeVector.push_back(std::make_pair("nanoliter [nL]", 1.0E+22));
    volumeVector.push_back(std::make_pair("picoliter [pL]", 1.0E+25));
    volumeVector.push_back(std::make_pair("femtoliter [fL]", 1.0E+28));
    volumeVector.push_back(std::make_pair("attoliter [aL]", 1.0E+31));
    volumeVector.push_back(std::make_pair("cc [cc, cm^3]", 1.0E+16));
    volumeVector.push_back(std::make_pair("drop", 2.0E+17));
    volumeVector.push_back(std::make_pair("barrel (oil) [bbl (oil)]", 62898107704.321));
    volumeVector.push_back(std::make_pair("barrel (US) [bbl (US)]", 83864143605.761));
    volumeVector.push_back(std::make_pair("barrel (UK) [bbl (UK)]", 61102568971.969));
    volumeVector.push_back(std::make_pair("galon (UK) [gal (UK)]", 2199692482990.9));
    volumeVector.push_back(std::make_pair("quart (UK) [qt (UK)]", 8798769931963.5));
    volumeVector.push_back(std::make_pair("pint (UK) [pt (UK)]", 17597539863927));
    volumeVector.push_back(std::make_pair("cup (metric)", 40000000000000));
    volumeVector.push_back(std::make_pair("cup (UK)", 35195079727854));
    volumeVector.push_back(std::make_pair("fluid ounce (US) [fl oz (US)]", 3.3814022701843E+14));
    volumeVector.push_back(std::make_pair("fluid ounce (UK) [fl oz (UK)]", 3.5195079727854E+14));
    volumeVector.push_back(std::make_pair("tablespoon (metric)", 6.6666666666667E+14));
    volumeVector.push_back(std::make_pair("tablespoon (UK)", 5.6312127564566E+14));
    volumeVector.push_back(std::make_pair("desertspoon(US)", 1.0144206810553E+15));
    volumeVector.push_back(std::make_pair("desertspoon(UK)", 8.446819134685E+14));
    volumeVector.push_back(std::make_pair("teaspoon (metric)", 2.0E+15));
    volumeVector.push_back(std::make_pair("teaspoon (UK)", 1.689363826937E+15));
    volumeVector.push_back(std::make_pair("gill (US) [gi]", 84535056754608));
    volumeVector.push_back(std::make_pair("gill (UK) [gi (UK)]", 70390159455708));
    volumeVector.push_back(std::make_pair("minim (US)", 1.6230730896885E+17));
    volumeVector.push_back(std::make_pair("minim (UK)", 1.689363826937E+17));
    volumeVector.push_back(std::make_pair("ton register [ton reg]", 3531466672.1489));
    volumeVector.push_back(std::make_pair("ccf", 3531466672.1489));
    volumeVector.push_back(std::make_pair("hundred-cubic foot", 3531466672.1489));
    volumeVector.push_back(std::make_pair("acre-foot [ac*ft]", 8107131.9378991));
    volumeVector.push_back(std::make_pair("acre-foot (US survey)", 8107083.2952048));
    volumeVector.push_back(std::make_pair("acre-inch [ac*in]", 97285583.254789));
    volumeVector.push_back(std::make_pair("dekastere", 1000000000));
    volumeVector.push_back(std::make_pair("stere [st]", 10000000000));
    volumeVector.push_back(std::make_pair("decistere", 100000000000));
    volumeVector.push_back(std::make_pair("cord [cd]", 2758958337.6163));
    volumeVector.push_back(std::make_pair("tun", 10483017950.72));
    volumeVector.push_back(std::make_pair("hogshead", 41932071802.881));
    volumeVector.push_back(std::make_pair("board foot", 4237760006578.6));
    volumeVector.push_back(std::make_pair("dram [dr]", 2.7051218161474E+15));
    volumeVector.push_back(std::make_pair("cor (Biblical)", 45454545454.546));
    volumeVector.push_back(std::make_pair("homer (Biblical)", 45454545454.546));
    volumeVector.push_back(std::make_pair("bath (Biblical)", 454545454545.46));
    volumeVector.push_back(std::make_pair("hin (Biblical)", 2727272727272.7));
    volumeVector.push_back(std::make_pair("cab (Biblical)", 8181818181818.2));
    volumeVector.push_back(std::make_pair("log (Biblical)", 32727272727273));
    volumeVector.push_back(std::make_pair("Taza (Spanish)", 42267528377304));
    volumeVector.push_back(std::make_pair("Earth's volume", 9.2336103416436E-12));

    return volumeVector;
}

QStringList Volume::getKey()
{
    QStringList volumeList;

    for (auto iter : this->fillVolume()) {

        volumeList.append(iter.first);
    }

    return volumeList;
}

double Volume::getValue(const int &arg1, const int &arg2)
{
    return this->fillVolume()[arg2].second / this->fillVolume()[arg1].second;
}
