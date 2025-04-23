#ifndef JEZIS_H
#define JEZIS_H

class Jan;
class Zjeveni;

class Jezis {

    private:
        Jan *m_jan = nullptr;
        Zjeveni *m_zjeveni = nullptr;

    public:
        Jezis();

        void davaZjeveniSkrzeAndela(Jan *komu);


        /** Gettery **/
        Jan *jan() { return m_jan; }
        Zjeveni *zjeveni() { return m_zjeveni; }


        /** Settery **/
        void vyvoleniJana();
        void prijimaZjeveni(Zjeveni *p_zjeveni);
};


#endif