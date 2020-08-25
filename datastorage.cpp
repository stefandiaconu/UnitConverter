#include "datastorage.h"

DataStorage::DataStorage()
{

}

std::vector<std::pair<QString, double>> DataStorage::fillDataStorage()
{
    std::vector<std::pair<QString, double>> dataStorageVector;

    dataStorageVector.push_back(std::make_pair("bit [b]", 1.0E+28));
    dataStorageVector.push_back(std::make_pair("nibble", 2.5E+27));
    dataStorageVector.push_back(std::make_pair("byte [B]", 1.25E+27));
    dataStorageVector.push_back(std::make_pair("character", 1.25E+27));
    dataStorageVector.push_back(std::make_pair("word", 6.25E+26));
    dataStorageVector.push_back(std::make_pair("MAPM-word", 3.125E+26));
    dataStorageVector.push_back(std::make_pair("quadruple-word", 1.5625E+26));
    dataStorageVector.push_back(std::make_pair("block", 2.44140625E+24));
    dataStorageVector.push_back(std::make_pair("kilobit [kb]", 9.765625E+24));
    dataStorageVector.push_back(std::make_pair("kilobyte [kB]", 1.220703125E+24));
    dataStorageVector.push_back(std::make_pair("kilobyte (10^3 bytes)", 1.25E+24));
    dataStorageVector.push_back(std::make_pair("megabit [Mb]", 9.5367431640625E+21));
    dataStorageVector.push_back(std::make_pair("megabyte [MB]", 1.1920928955078E+21));
    dataStorageVector.push_back(std::make_pair("megabyte (10^6 bytes)", 1.25E+21));
    dataStorageVector.push_back(std::make_pair("gigabit [Gb]", 9.3132257461548E+18));
    dataStorageVector.push_back(std::make_pair("gigabyte [GB]", 1.1641532182693E+18));
    dataStorageVector.push_back(std::make_pair("gigabyte (10^9 bytes)", 1.25E+18));
    dataStorageVector.push_back(std::make_pair("terabit [Tb]", 9.0949470177293E+15));
    dataStorageVector.push_back(std::make_pair("terabyte [TB]", 1.1368683772162E+15));
    dataStorageVector.push_back(std::make_pair("terabyte (10^12 bytes)", 1.25E+15));
    dataStorageVector.push_back(std::make_pair("petabit [Pb]", 8881784197001.2));
    dataStorageVector.push_back(std::make_pair("petabyte [PB]", 1110223024625.2));
    dataStorageVector.push_back(std::make_pair("petabyte (10^15 bytes)", 1250000000000));
    dataStorageVector.push_back(std::make_pair("exabit [Eb]", 8673617379.884));
    dataStorageVector.push_back(std::make_pair("exabyte [EB]", 1084202172.4855));
    dataStorageVector.push_back(std::make_pair("exabyte (10^18 bytes)", 1250000000));
    dataStorageVector.push_back(std::make_pair("floppy disk (3.5\"; DD)", 1.7150728837373E+21));
    dataStorageVector.push_back(std::make_pair("floppy disk (3.5\"; HD)", 8.5753644186863E+20));
    dataStorageVector.push_back(std::make_pair("floppy disk (3.5\"; ED)", 4.2876822093432E+20));
    dataStorageVector.push_back(std::make_pair("floppy disk (5.25\"; DD)", 3.4301457674745E+21));
    dataStorageVector.push_back(std::make_pair("floppy disk (5.25\"; HD)", 1.029694749051E+21));
    dataStorageVector.push_back(std::make_pair("Zip 100", 1.2446248139236E+19));
    dataStorageVector.push_back(std::make_pair("Zip 250", 4.9784992556944E+18));
    dataStorageVector.push_back(std::make_pair("Jaz 1GB", 1.1641532182693E+18));
    dataStorageVector.push_back(std::make_pair("Jaz 2GB", 5.8207660913467E+17));
    dataStorageVector.push_back(std::make_pair("CD (74 minute)", 1.8353788400472E+18));
    dataStorageVector.push_back(std::make_pair("CD (80 minute)", 1.6977254283523E+18));
    dataStorageVector.push_back(std::make_pair("DVD (1 layer; 1 side)", 2.4769217409986E+17));
    dataStorageVector.push_back(std::make_pair("DVD (2 layer; 1 side)", 1.3695920214934E+17));
    dataStorageVector.push_back(std::make_pair("DVD (1 layer; 2 side)", 1.2384608704993E+17));
    dataStorageVector.push_back(std::make_pair("DVD (2 layer; 2 side)", 6.8479601074668E+16));


    return dataStorageVector;
}

QStringList DataStorage::getKey()
{
    QStringList dataStorageList;

    for (auto iter : this->fillDataStorage()) {

        dataStorageList.append(iter.first);
    }

    return dataStorageList;
}

double DataStorage::getValue(const int &arg1, const int &arg2)
{
    return this->fillDataStorage()[arg2].second / this->fillDataStorage()[arg1].second;
}
