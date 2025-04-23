#include "kapitola1_2.h"

#include <string>

#include "kapitola.h"


/*
 * 9Já Jan, váš bratr a spoluúčastník soužení, království a vytrvalosti v Ježíši Kristu, jsem se ocitl pro Boží slovo a svědectví Ježíše [Krista] na ostrově zvaném Patmos.
 * 10V den Páně jsem se ocitl v Duchu a uslyšel jsem za sebou mocný hlas jako zvuk polnice,
 * 11který říkal: “Co vidíš, napiš do svitku a pošli sedmi sborům: Do Efesu, do Smyrny, do Pergama, do Thyatir, do Sard, do Filadelfie a do Laodiceje.”
 * 12Obrátil jsem se, abych viděl hlas, který se mnou mluvil. A když jsem se obrátil, spatřil jsem sedm zlatých svícnů
 * 13a uprostřed těch svícnů někoho jako Syna člověka, oděného dlouhým rouchem a přepásaného zlatým pásem až k prsům.
 * 14Jeho hlava a vlasy byly bílé jako bílá vlna, jako sníh, jeho oči jako plamen ohně; 
 * 15jeho nohy podobné bronzu rozžhavenému v peci a jeho hlas jako zvuk mnohých vod. 
 * 16A ve své pravici měl sedm hvězd a z jeho úst vycházel ostrý dvousečný meč a jeho tvář jako když slunce září ve své síle.
 * 17Když jsem jej spatřil, padl jsem k jeho nohám jako mrtvý. I položil na mne svou pravici a řekl: “Neboj se. Já jsem první i poslední,
 * 18ten Živý. Byl jsem mrtvý, a hle, žiji na věky věků. [Amen.] Mám klíče smrti i podsvětí. 
 * 19Napiš tedy ty věci, které jsi uviděl, a ty, které jsou, a ty, které se mají stát po nich. 
 * 20Tajemství těch sedmi hvězd, které jsi spatřil na mé pravici, i těch sedmi zlatých svícnů: Sedm hvězd jsou andělé sedmi sborů, sedm svícnů je sedm sborů.”
 */ 


Kapitola1_2::Kapitola1_2() : 
    
    Kapitola("1.2 Počátek událostí Zjevení a tajemství sedmi hvězd a zlatých svícnů") 
{
    vers9(p_jan, p_boziKralovstvi, p_vytrvalost, p_boziSlovo, p_svedectvi, p_ostrovPatmos);
    vers10(p_jan, p_duch, p_polnice);
}


/** 
 * Já Jan, váš bratr a spoluúčastník soužení, království a vytrvalosti v Ježíši Kristu, 
 * jsem se ocitl pro Boží slovo a svědectví Ježíše [Krista] na ostrově zvaném Patmos.
 * **/
Kapitola1_2::vers9(
    Jan *p_jan, 
    BoziKralovstvi *p_boziKralovstvi, 
    Vytrvalost *p_vytrvalost,
    Jezis *p_jezis,
    BoziSlovo *p_boziSlovo,
    Svedectvi *p_svedectvi,
    OstrovPatmos *p_ostrovPatmos)
{
    std::array<std::string> vyklad = {
        p_jan->predstaveni(), // Já Jan, váš bratr a spoluúčastník soužení
        p_jan->coJeMiDrahe(p_boziKralovstvi, p_vytrvalost, p_jezis), // království a vytrvalosti v Ježíši Kristu
        p_jan->procJsemBylZatracen(p_boziSlovo, p_svedectvi, p_jezis), // pro Boží slovo a svědectví Ježíše Krista
        p_jan->veVyhnanstvi(p_ostrovPatmos), // jsem se ocitl na ostrově zvaném Patmos
    };

    m_pasaze.push(new Pasaz("9", { p_jan, p_boziKralovstvi, p_vytrvalost, p_boziSlovo, p_svedectvi, p_ostrovPatmos }, {
        p_jan->predstaveni(), ", ", 
        p_boziKralovstvi->symbol(), " a ", 
        p_vytrvalost->symbol(), ", ", 
        p_jan->ocitlJsemSe(), " pro ", 
        p_boziSlovo->symbol(), " a ", 
        p_svedectvi->symbol(), 
        p_ostrovPatmos->symbol()        
    }));

}

/**
 * V den Páně jsem se ocitl v Duchu a uslyšel jsem za sebou mocný hlas jako zvuk polnice,
 */
Kapitola1_2::vers10(
    Jan *p_jan, 
    Duch *p_duch, 
    Polnice *p_polnice)
{
    m_pasaze.push(new Pasaz("10", { p_jan, p_duch, p_polnice }));
}