#include "jezis.h"

#include <iostream>
#include "buh.h"
#include "jan.h"
#include "zjeveni.h"

Jezis::Jezis() {}

void Jezis::davaZjeveniSkrzeAndela(Jan *komu)
{
    komu->prijimaZjeveni(zjeveni());
}

void Jezis::vyvoleniJana()
{
    m_jan = Buh::entita()->jan();
}

void Jezis::prijimaZjeveni(Zjeveni *p_zjeveni)
{
    m_zjeveni = p_zjeveni;
}