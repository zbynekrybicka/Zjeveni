#include "zjeveni.h"

#include <iostream>

#include "kapitola.h"
#include "kapitola1_2.h"

Zjeveni::Zjeveni() {
    Kapitola *kapitola;

    // kapitola = new Kapitola1_1("1.1 Shrnutí a závěr celé knihy Zjevení");
    // m_kapitoly.push(kapitola);

    kapitola = new Kapitola1_2();
    m_kapitoly.push(kapitola);
}


std::string Zjeveni::dosvedceni()
{
    std::string result = "";
    while (!m_kapitoly.empty()) {
        Kapitola *kapitola = m_kapitoly.front();
        result += kapitola->nazev() + "\n\n";
        m_kapitoly.pop();
    }
    return result;
}


// std::string Zjeveni::shrnutiAZaverCeleKnihyZjeveni()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::pocatekUdalostiZjeveniATajemstviSedmiHvezdAZlatychSvicnu()
// {   
//     const std::string nadpis = "1.2 Počátek událostí Zjevení a tajemství sedmi hvězd a zlatých svícnů\n\n";
//     std::string result = nadpis;
// 
// 
// 
//     return result;
// }
// 
// std::string Zjeveni::dopisyPoslanePoslumSedmiSboru()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::boziTrunAOrgnanizaceVDuchovnimSvete()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::knihaZapecetenaSedmiPecetemi()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::soudNadSluncemMesicemAHvezdamiPredchozihoNebeKtereZradily()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::dvanactKmenuNovehoDuchovnihoIzraele()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::posledniPecetASedmPolnic()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::kobylkyZPropastiAPadliAndele()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::otevrenaKnihaZNebeAZaslibenyPastyr()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::dvaSvedkoveASedmaPolnice()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::valkaMeziBohemADrakem()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::vyvolenyLidKteryPrijalCejchSelmyAZradil()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::stoCtyricetCtyriTisicKralovstviAKnezi()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::svatyneStankuSvedectviMistoKamSePrijdouPoklonitVsechnyNarody()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::sedmMisekHnevu()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::pokrmDablaVinoSmilstva()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::svatbaSeSatanemKteryNechalZpitVsechnyNarody()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::svatebniHostinaBerankovaVDuchuAVTele()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::prvniVzkriseniDuchuMucednikuAZivych()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::zaslibeneNoveNebeANovaZemeShincheonji()
// {
//     return std::string();
// }
// 
// std::string Zjeveni::svateMestoKdeSeNachaziStromZivota()
// {
//     return std::string();
// }
// 

