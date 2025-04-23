#include "buh.h"

#include <iostream>

#include "jezis.h"
#include "jan.h"
#include "zjeveni.h"

Buh::Buh() 
{
    m_jezis = new Jezis();
    m_jan = new Jan();
    m_zjeveni = new Zjeveni();
}

Buh *Buh::entita()
{
    static Buh *s_entita = new Buh();
    return s_entita;
}

/*
 * Zjevení 1:1
 *
 * Zjevení Ježíše Krista, které mu dal Bůh...
 */
void Buh::davaZjeveni(Jezis *jezis)
{
    jezis->prijimaZjeveni(zjeveni());
}

