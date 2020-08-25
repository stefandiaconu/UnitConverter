#include "length.h"

Length::Length()
{

}

std::vector<std::pair<QString, double>> Length::fillLength()
{
    std::vector<std::pair<QString, double>> lengthVector;

    lengthVector.push_back(std::make_pair("meter [m]", 1.0E+31));
    lengthVector.push_back(std::make_pair("kilometer [km]", 1.0E+28));
    lengthVector.push_back(std::make_pair("decimeter [dm]", 1.0E+32));
    lengthVector.push_back(std::make_pair("centimeter [cm]", 1.0E+33));
    lengthVector.push_back(std::make_pair("millimeter [mm]", 1.0E+34));
    lengthVector.push_back(std::make_pair("micrometer [µm]", 1.0E+37));
    lengthVector.push_back(std::make_pair("nanometer [nm]", 1.0E+40));
    lengthVector.push_back(std::make_pair("mile [mi; mi(Int)]", 6.2137119223733E+27));
    lengthVector.push_back(std::make_pair("yard [yd]", 1.0936132983377E+31));
    lengthVector.push_back(std::make_pair("foot [ft]", 3.2808398950131E+31));
    lengthVector.push_back(std::make_pair("inch [in]", 3.9370078740157E+32));
    lengthVector.push_back(std::make_pair("light year [ly]", 1.0570008340247E+15));
    lengthVector.push_back(std::make_pair("exameter [Em]", 10000000000000));
    lengthVector.push_back(std::make_pair("petameter [Pm]", 1.0E+16));
    lengthVector.push_back(std::make_pair("terameter [Tm]", 1.0E+19));
    lengthVector.push_back(std::make_pair("gigameter [Gm]", 1.0E+22));
    lengthVector.push_back(std::make_pair("megameter [Mm]", 1.0E+25));
    lengthVector.push_back(std::make_pair("hectometer [hm]", 1.0E+29));
    lengthVector.push_back(std::make_pair("dekameter [dam]", 1.0E+30));
    lengthVector.push_back(std::make_pair("micron [µ]", 1.0E+37));
    lengthVector.push_back(std::make_pair("picometer [pm]", 1.0E+43));
    lengthVector.push_back(std::make_pair("femtometer [fm]", 1.0E+46));
    lengthVector.push_back(std::make_pair("attometer [am]", 1.0E+49));
    lengthVector.push_back(std::make_pair("megaparsec [Mpc]", 324077928.96664));
    lengthVector.push_back(std::make_pair("kiloparsec [kpc]", 324077928966.64));
    lengthVector.push_back(std::make_pair("parsec [pc]", 3.2407792896664E+14));
    lengthVector.push_back(std::make_pair("astronomical unit [AU; UA]", 6.6845871226706E+19));
    lengthVector.push_back(std::make_pair("league [lea]", 2.0712373074578E+27));
    lengthVector.push_back(std::make_pair("nautical league (UK)", 1.7987060827923E+27));
    lengthVector.push_back(std::make_pair("nautical league (int.)", 1.7998560115191E+27));
    lengthVector.push_back(std::make_pair("league (statute) [st.league]", 2.0712331649832E+27));
    lengthVector.push_back(std::make_pair("nautical mile (UK) [NM (UK)]", 5.3961182483768E+27));
    lengthVector.push_back(std::make_pair("nautical mile (international)", 5.3995680345572E+27));
    lengthVector.push_back(std::make_pair("mile (statute) [mi; mi (US)]", 6.2136994949495E+27));
    lengthVector.push_back(std::make_pair("mile (US survey) [mi]", 6.2136994949495E+27));
    lengthVector.push_back(std::make_pair("mile (Roman)", 6.7576516890075E+27));
    lengthVector.push_back(std::make_pair("kiloyard [kyd]", 1.0936132983377E+28));
    lengthVector.push_back(std::make_pair("furlong [fur]", 4.9709695378987E+28));
    lengthVector.push_back(std::make_pair("furlong (US survey) [fur]", 4.9709595959596E+28));
    lengthVector.push_back(std::make_pair("chain [ch]", 4.9709695378987E+29));
    lengthVector.push_back(std::make_pair("chain (US survey) [ch]", 4.9709595959596E+29));
    lengthVector.push_back(std::make_pair("rope", 1.6404199475066E+30));
    lengthVector.push_back(std::make_pair("rod [rd]", 1.9883878151595E+30));
    lengthVector.push_back(std::make_pair("rod (US survey) [rd]", 1.9883838383838E+30));
    lengthVector.push_back(std::make_pair("perch", 1.9883878151595E+30));
    lengthVector.push_back(std::make_pair("pole", 1.9883878151595E+30));
    lengthVector.push_back(std::make_pair("fathom [fath]", 5.4680664916885E+30));
    lengthVector.push_back(std::make_pair("fathom (US survey) [fath]", 5.4680555555556E+30));
    lengthVector.push_back(std::make_pair("ell", 8.7489063867017E+30));
    lengthVector.push_back(std::make_pair("foot (US survey) [ft]", 3.2808333333333E+31));
    lengthVector.push_back(std::make_pair("link [li]", 4.9709695378987E+31));
    lengthVector.push_back(std::make_pair("link (US survey) [li]", 4.9709595959596E+31));
    lengthVector.push_back(std::make_pair("cubit (UK)", 2.1872265966754E+31));
    lengthVector.push_back(std::make_pair("hand", 9.8425196850394E+31));
    lengthVector.push_back(std::make_pair("span (cloth)", 4.3744531933508E+31));
    lengthVector.push_back(std::make_pair("finger (cloth)", 8.7489063867017E+31));
    lengthVector.push_back(std::make_pair("nail (cloth)", 1.7497812773403E+32));
    lengthVector.push_back(std::make_pair("inch (US survey) [in]", 3.937E+32));
    lengthVector.push_back(std::make_pair("barleycorn", 1.1811023622047E+33));
    lengthVector.push_back(std::make_pair("mil [mil; thou]", 3.9370078740158E+35));
    lengthVector.push_back(std::make_pair("microinch", 3.9370078740157E+38));
    lengthVector.push_back(std::make_pair("angstrom [A]", 1.0E+41));
    lengthVector.push_back(std::make_pair("a.u. of length [a.u.; b]", 1.8897259885789E+41));
    lengthVector.push_back(std::make_pair("X-unit [X]", 9.9792431741977E+43));
    lengthVector.push_back(std::make_pair("fermi [F; f]", 1.0E+46));
    lengthVector.push_back(std::make_pair("arpent", 1.7087707786527E+29));
    lengthVector.push_back(std::make_pair("pica", 2.3622047244095E+33));
    lengthVector.push_back(std::make_pair("point", 2.8346456692913E+34));
    lengthVector.push_back(std::make_pair("twip", 5.6692913385827E+35));
    lengthVector.push_back(std::make_pair("aln", 1.684131736527E+31));
    lengthVector.push_back(std::make_pair("famn", 5.6137724550898E+30));
    lengthVector.push_back(std::make_pair("caliber [cl]", 3.9370078740158E+34));
    lengthVector.push_back(std::make_pair("centiinch [cin]", 3.9370078740158E+34));
    lengthVector.push_back(std::make_pair("ken", 4.7206329424649E+30));
    lengthVector.push_back(std::make_pair("Russian archin", 1.4060742407199E+31));
    lengthVector.push_back(std::make_pair("Roman actus", 2.8185909750972E+29));
    lengthVector.push_back(std::make_pair("vara de tarea", 3.9912894099916E+30));
    lengthVector.push_back(std::make_pair("vara conuquera", 3.9912894099916E+30));
    lengthVector.push_back(std::make_pair("vara castellana", 1.1973868229975E+31));
    lengthVector.push_back(std::make_pair("cubit (Greek)", 2.1608166158155E+31));
    lengthVector.push_back(std::make_pair("long reed", 3.124609423822E+30));
    lengthVector.push_back(std::make_pair("reed", 3.6453776611257E+30));
    lengthVector.push_back(std::make_pair("long cubit", 1.8747656542932E+31));
    lengthVector.push_back(std::make_pair("handbreadth", 1.3123359580052E+32));
    lengthVector.push_back(std::make_pair("fingerbreadth", 5.249343832021E+32));
    lengthVector.push_back(std::make_pair("Planck length", 6.1879273537329E+65));
    lengthVector.push_back(std::make_pair("Electron radius (classical)", 3.5486904388329E+45));
    lengthVector.push_back(std::make_pair("Bohr radius [b; a.u.]", 1.8897259885789E+41));
    lengthVector.push_back(std::make_pair("Earth's equatorial radius", 1.5678502891116E+24));
    lengthVector.push_back(std::make_pair("Earth's polar radius", 1.5731242420491E+24));
    lengthVector.push_back(std::make_pair("Earth's distance from sun", 6.6844919786096E+19));
    lengthVector.push_back(std::make_pair("Sun's radius", 1.4367816091954E+22));

    return lengthVector;
}

QStringList Length::getKey()
{
    QStringList lengthList;

    for (auto iter : this->fillLength()) {

        lengthList.append(iter.first);
    }

    return lengthList;
}

double Length::getValue(const int &arg1, const int &arg2)
{
    return this->fillLength()[arg2].second / this->fillLength()[arg1].second;
}
