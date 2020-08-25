#include "volumedry.h"

VolumeDry::VolumeDry()
{

}

std::vector<std::pair<QString, double>> VolumeDry::fillVolumeDry()
{
    std::vector<std::pair<QString, double>> volumeDryVector;

    volumeDryVector.push_back(std::make_pair("liter [L;l]", 1156271236039.4));
    volumeDryVector.push_back(std::make_pair("barrel dry (US) [bbl dry (US)]", 10000000000));
    volumeDryVector.push_back(std::make_pair("pint dry (US) [pt dry (US)]", 2099980469131.6));
    volumeDryVector.push_back(std::make_pair("quart dry (US) [qt dry (US)]", 1049990234565.8));
    volumeDryVector.push_back(std::make_pair("peck (US) [pk (US)]", 131248779320.73));
    volumeDryVector.push_back(std::make_pair("peck (UK) [pk (UK)]", 127172057310.72));
    volumeDryVector.push_back(std::make_pair("bushel (US) [bu (US)]", 32812194830.182));
    volumeDryVector.push_back(std::make_pair("bushel (UK) [bu (UK)]", 31793014327.68));
    volumeDryVector.push_back(std::make_pair("cor (Biblical)", 5255778601.452));
    volumeDryVector.push_back(std::make_pair("homer (Biblical)", 5255778601.452));
    volumeDryVector.push_back(std::make_pair("ephah (Biblical)", 52557786014.52));
    volumeDryVector.push_back(std::make_pair("seah (Biblical)", 157673358043.56));
    volumeDryVector.push_back(std::make_pair("omer (Biblical)", 525577860145.2));
    volumeDryVector.push_back(std::make_pair("cab (Biblical)", 946040148261.35));
    volumeDryVector.push_back(std::make_pair("log (Biblical)", 3784160593045.4));

    return volumeDryVector;
}

QStringList VolumeDry::getKey()
{
    return QStringList{};
}

double VolumeDry::getValue(const int &arg1, const int &arg2)
{
    return this->fillVolumeDry()[arg2].second / this->fillVolumeDry()[arg1].second;
}
