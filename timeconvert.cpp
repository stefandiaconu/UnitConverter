#include "timeconvert.h"

TimeConvert::TimeConvert()
{

}

std::vector<std::pair<QString, double>> TimeConvert::fillTime()
{
    std::vector<std::pair<QString, double>> timeVector;

    timeVector.push_back(std::make_pair("second [s]", 3.1536E+18));
    timeVector.push_back(std::make_pair("millisecond [ms]", 3.1536E+21));
    timeVector.push_back(std::make_pair("minute [min]", 5.256E+16));
    timeVector.push_back(std::make_pair("hour [h]", 8.76E+14));
    timeVector.push_back(std::make_pair("day [d]", 36500000000000));
    timeVector.push_back(std::make_pair("week", 5214285714285.7));
    timeVector.push_back(std::make_pair("month", 1200000000000));
    timeVector.push_back(std::make_pair("year [y]", 100000000000));
    timeVector.push_back(std::make_pair("decade", 10000000000));
    timeVector.push_back(std::make_pair("century", 1000000000));
    timeVector.push_back(std::make_pair("millennium", 100000000));
    timeVector.push_back(std::make_pair("microsecond [µs]", 3.1536E+24));
    timeVector.push_back(std::make_pair("nanosecond [ns]", 3.1536E+27));
    timeVector.push_back(std::make_pair("picosecond [ps]", 3.1536E+30));
    timeVector.push_back(std::make_pair("femtosecond [fs]", 3.1536E+33));
    timeVector.push_back(std::make_pair("attosecond [as]", 3.1536E+36));
    timeVector.push_back(std::make_pair("shake", 3.1536E+26));
    timeVector.push_back(std::make_pair("month (synodic)", 1236006041191.2));
    timeVector.push_back(std::make_pair("year (Julian)", 99931553730.322));
    timeVector.push_back(std::make_pair("year (leap)", 99726775956.284));
    timeVector.push_back(std::make_pair("year (tropical)", 99933675424.067));
    timeVector.push_back(std::make_pair("year (sidereal)", 99929813565.361));
    timeVector.push_back(std::make_pair("day (sidereal)", 36599933916786));
    timeVector.push_back(std::make_pair("hour (sidereal)", 8.7839841400286E+14));
    timeVector.push_back(std::make_pair("minute (sidereal)", 5.2703904840172E+16));
    timeVector.push_back(std::make_pair("second (sidereal)", 3.1622342904103E+18));
    timeVector.push_back(std::make_pair("fortnight", 2607142857142.9));
    timeVector.push_back(std::make_pair("septennial", 14285714285.714));
    timeVector.push_back(std::make_pair("octennial", 12500000000));
    timeVector.push_back(std::make_pair("novennial", 11111111111.111));
    timeVector.push_back(std::make_pair("quindecennial", 6666666666.6667));
    timeVector.push_back(std::make_pair("quinquennial", 20000000000));
    timeVector.push_back(std::make_pair("Planck time", 5.8502270636075E+61));

    return timeVector;
}

QStringList TimeConvert::getKey()
{
    QStringList timeList;

    for (auto iter : this->fillTime()) {

        timeList.append(iter.first);
    }

    return timeList;
}

double TimeConvert::getValue(const int &arg1, const int &arg2)
{
    return this->fillTime()[arg2].second / this->fillTime()[arg1].second;
}
