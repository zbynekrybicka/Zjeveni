#ifndef BUH_H
#define BUH_H

class Jezis;
class Jan;
class Zjeveni;

class Buh {

    private:
        Jezis *m_jezis;
        Jan *m_jan;
        Zjeveni *m_zjeveni;
        
        Buh();

    public:
        /*
         * Zjevení 1:1
         *
         * Zjevení Ježíše Krista, které mu dal Bůh...
         */
        void davaZjeveni(Jezis *jezis);


        /** Gettery **/
        static Buh *entita();

        // Ježíš
        Jezis *jezis() { return m_jezis; }
        Jezis *syn() { return m_jezis; }
        Jezis *synCloveka() { return m_jezis; }
        Jezis *beranek() { return m_jezis; }

        // Jan
        Jan *jan() { return m_jan; }
        Jan *zaslibenyPastyr() { return m_jan; }
        Jan *tenKdoVitezi() { return m_jan; }

        // Zjevení
        Zjeveni *zjeveni() { return m_zjeveni; }



};

#endif