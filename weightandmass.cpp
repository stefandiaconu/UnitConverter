#include "weightandmass.h"

WeightAndMass::WeightAndMass()
{

}

std::vector<std::pair<QString, double>> WeightAndMass::fillWeightAndMass()
{
    std::vector<std::pair<QString, double>> weightAndMassVector;

    weightAndMassVector.push_back(std::make_pair("kilogram [kg]", 1.0E+15));
    weightAndMassVector.push_back(std::make_pair("gram [g]", 1.0E+18));
    weightAndMassVector.push_back(std::make_pair("milligram [mg]", 1.0E+21));
    weightAndMassVector.push_back(std::make_pair("ton (metric) [t]", 1000000000000));
    weightAndMassVector.push_back(std::make_pair("pound [lbs]", 2.2046226218488E+15));
    weightAndMassVector.push_back(std::make_pair("ounce [oz]", 3.527396194958E+16));
    weightAndMassVector.push_back(std::make_pair("carat [car; ct]", 5.0E+18));
    weightAndMassVector.push_back(std::make_pair("ton (short) [ton (US)]", 1102311310924.4));
    weightAndMassVector.push_back(std::make_pair("ton (long) [ton (UK)]", 984206527611.06));
    weightAndMassVector.push_back(std::make_pair("Atomic mass unit [u]", 6.0221366516752E+41));
    weightAndMassVector.push_back(std::make_pair("exagram [Eg]", 1));
    weightAndMassVector.push_back(std::make_pair("petagram [Pg]", 1000));
    weightAndMassVector.push_back(std::make_pair("teragram [Tg]", 1000000));
    weightAndMassVector.push_back(std::make_pair("gigagram [Gg]", 1000000000));
    weightAndMassVector.push_back(std::make_pair("megagram [Mg]", 1000000000000));
    weightAndMassVector.push_back(std::make_pair("hectogram [hg]", 1.0E+16));
    weightAndMassVector.push_back(std::make_pair("dekagram [dag]", 1.0E+17));
    weightAndMassVector.push_back(std::make_pair("decigram [dg]", 1.0E+19));
    weightAndMassVector.push_back(std::make_pair("centigram [cg]", 1.0E+20));
    weightAndMassVector.push_back(std::make_pair("microgram [µg]", 1.0E+24));
    weightAndMassVector.push_back(std::make_pair("nanogram [ng]", 1.0E+27));
    weightAndMassVector.push_back(std::make_pair("picogram [pg]", 1.0E+30));
    weightAndMassVector.push_back(std::make_pair("femtogram [fg]", 1.0E+33));
    weightAndMassVector.push_back(std::make_pair("attogram [ag]", 1.0E+36));
    weightAndMassVector.push_back(std::make_pair("dalton", 6.02217364335E+41));
    weightAndMassVector.push_back(std::make_pair("kilogram-force square second/meter", 1.0197162129779E+14));
    weightAndMassVector.push_back(std::make_pair("kilopound [kip]", 2204622621848.8));
    weightAndMassVector.push_back(std::make_pair("kip", 2204622621848.8));
    weightAndMassVector.push_back(std::make_pair("slug", 68521765856800));
    weightAndMassVector.push_back(std::make_pair("pound-force square second/foot", 68521765856792));
    weightAndMassVector.push_back(std::make_pair("pound (troy or apothecary)", 2.679228880719E+15));
    weightAndMassVector.push_back(std::make_pair("poundal [pdl]", 7.09888484236E+16));
    weightAndMassVector.push_back(std::make_pair("ton (assay) (US) [AT (US)]", 3.4285710367347E+16));
    weightAndMassVector.push_back(std::make_pair("ton (assay) (UK) [AT (UK)]", 3.061224489796E+16));
    weightAndMassVector.push_back(std::make_pair("kiloton (metric) [kt]", 1000000000));
    weightAndMassVector.push_back(std::make_pair("quintal (metric) [cwt]", 10000000000000));
    weightAndMassVector.push_back(std::make_pair("hundredweight (US)", 22046226218488));
    weightAndMassVector.push_back(std::make_pair("hundredweight (UK)", 19684130552221));
    weightAndMassVector.push_back(std::make_pair("quarter (US) [qr (US)]", 88184904873951));
    weightAndMassVector.push_back(std::make_pair("quarter (UK) [qr (UK)]", 78736522208885));
    weightAndMassVector.push_back(std::make_pair("stone (US)", 1.763698097479E+14));
    weightAndMassVector.push_back(std::make_pair("stone (UK)", 1.5747304441777E+14));
    weightAndMassVector.push_back(std::make_pair("tonne [t]", 1000000000000));
    weightAndMassVector.push_back(std::make_pair("pennyweight [pwt]", 6.4301493137083E+17));
    weightAndMassVector.push_back(std::make_pair("scruple (apothecary) [s.ap]", 7.71617917645E+17));
    weightAndMassVector.push_back(std::make_pair("grain [gr]", 1.54323583529E+19));
    weightAndMassVector.push_back(std::make_pair("gamma", 1.0E+24));
    weightAndMassVector.push_back(std::make_pair("talent (Biblical Hebrew)", 29239766081871));
    weightAndMassVector.push_back(std::make_pair("mina (Biblical Hebrew)", 1.7543859649123E+15));
    weightAndMassVector.push_back(std::make_pair("shekel (Biblical Hebrew)", 8.7719298245614E+16));
    weightAndMassVector.push_back(std::make_pair("bekan (Biblical Hebrew)", 1.7543859649123E+17));
    weightAndMassVector.push_back(std::make_pair("gerah (Biblical Hebrew)", 1.7543859649123E+18));
    weightAndMassVector.push_back(std::make_pair("talent (Biblical Greek)", 49019607843137));
    weightAndMassVector.push_back(std::make_pair("mina (Biblical Greek)", 2.9411764705882E+15));
    weightAndMassVector.push_back(std::make_pair("tetradrachma (Biblical Greek)", 7.3529411764706E+16));
    weightAndMassVector.push_back(std::make_pair("didrachma (Biblical Greek)", 1.4705882352941E+17));
    weightAndMassVector.push_back(std::make_pair("drachma (Biblical Greek)", 2.9411764705882E+17));
    weightAndMassVector.push_back(std::make_pair("denarius (Biblical Roman)", 2.5974025974026E+17));
    weightAndMassVector.push_back(std::make_pair("assarion (Biblical Roman)", 4.1558441558442E+18));
    weightAndMassVector.push_back(std::make_pair("quadrans (Biblical Roman)", 1.6623376623377E+19));
    weightAndMassVector.push_back(std::make_pair("lepton (Biblical Roman)", 3.3246753246753E+19));
    weightAndMassVector.push_back(std::make_pair("Planck mass", 4.5940892447777E+22));
    weightAndMassVector.push_back(std::make_pair("Electron mass (rest)", 1.0977683828808E+45));
    weightAndMassVector.push_back(std::make_pair("Muon mass", 5.3091724927313E+42));
    weightAndMassVector.push_back(std::make_pair("Proton mass", 5.9786332019449E+41));
    weightAndMassVector.push_back(std::make_pair("Neutron mass", 5.9704037533301E+41));
    weightAndMassVector.push_back(std::make_pair("Deuteron mass", 2.9908008946084E+41));
    weightAndMassVector.push_back(std::make_pair("Earth's mass", 1.673360107095E-10));
    weightAndMassVector.push_back(std::make_pair("Sun's mass", 5.0E-16));

    return weightAndMassVector;
}

QStringList WeightAndMass::getKey()
{
    QStringList weightAndMassList;

    for (auto iter : this->fillWeightAndMass()) {

        weightAndMassList.append(iter.first);
    }

    return weightAndMassList;
}

double WeightAndMass::getValue(const int &arg1, const int &arg2)
{
    return this->fillWeightAndMass()[arg2].second / this->fillWeightAndMass()[arg1].second;
}
