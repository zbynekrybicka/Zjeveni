#ifndef ZJEVENI_H
#define ZJEVENI_H

#include <string>
#include <queue>

class Kapitola;


class Zjeveni {

    std::queue<Kapitola*> m_kapitoly;

    public:
        Zjeveni();
        
        std::string dosvedceni();

        /*std::string shrnutiAZaverCeleKnihyZjeveni();
        std::string pocatekUdalostiZjeveniATajemstviSedmiHvezdAZlatychSvicnu();
        std::string dopisyPoslanePoslumSedmiSboru();
        std::string boziTrunAOrgnanizaceVDuchovnimSvete();
        std::string knihaZapecetenaSedmiPecetemi();
        std::string soudNadSluncemMesicemAHvezdamiPredchozihoNebeKtereZradily();
        std::string dvanactKmenuNovehoDuchovnihoIzraele();
        std::string posledniPecetASedmPolnic();
        std::string kobylkyZPropastiAPadliAndele();
        std::string otevrenaKnihaZNebeAZaslibenyPastyr();
        std::string dvaSvedkoveASedmaPolnice();
        std::string valkaMeziBohemADrakem();
        std::string vyvolenyLidKteryPrijalCejchSelmyAZradil();
        std::string stoCtyricetCtyriTisicKralovstviAKnezi();
        std::string svatyneStankuSvedectviMistoKamSePrijdouPoklonitVsechnyNarody();
        std::string sedmMisekHnevu();
        std::string pokrmDablaVinoSmilstva();
        std::string svatbaSeSatanemKteryNechalZpitVsechnyNarody();
        std::string svatebniHostinaBerankovaVDuchuAVTele();
        std::string prvniVzkriseniDuchuMucednikuAZivych();
        std::string zaslibeneNoveNebeANovaZemeShincheonji();
        std::string svateMestoKdeSeNachaziStromZivota();*/

};

#endif