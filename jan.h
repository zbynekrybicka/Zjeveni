#ifndef JAN_H
#define JAN_H

#include <string>

class Zjeveni;

class Jan {

    private:
        Zjeveni *m_zjeveni;

    public:
        std::string dosvedcuje();
        Jan();
        

        void prijimaZjeveni(Zjeveni *p_zjeveni) { m_zjeveni = p_zjeveni; }
        
};

#endif