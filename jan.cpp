#include "jan.h"

#include <iostream>
#include "zjeveni.h"

Jan::Jan() {}

std::string Jan::dosvedcuje()
{
    return m_zjeveni->dosvedceni();
}

