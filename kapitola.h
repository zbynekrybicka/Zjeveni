#ifndef KAPITOLA_H
#define KAPITOLA_H

#include <string>
#include <vector>
#include <queue>

class Kapitola
{

    private:
        std::string m_nazev;
        queue<Pasaz *> m_pasaze;



    public:
        Kapitola(std::string p_nazev);
        pasaz(std::string p_verse, std::string p_zneni, vector<Entita *> p_entity);
        std::string nazev() { return m_nazev; }
};

#endif