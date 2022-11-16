#pragma once

class Bebe
{
public:
	Bebe(int intervalHeure, int intervalMinute, int premierBiberonHeure, int premierBiberonMinute, int quantitéParPrise);
    int boireBiberon(int quantiteLait);
    void regurgiter(bool bouton);
    void heureProchainBiberon(int ancienBiberonHeure, int ancienBiberonMinute);
    
    //Get
    int getprochainBiberonHeure();
    int getprochainBiberonMinute();


private:
    int m_intervalHeure;
    int m_intervalMinute;
    int m_prochainBiberonHeure;
    int m_prochainBiberonMinute;
    int m_quantitéParPrise;
    bool m_regurgiter;
    const int m_intervalRegurgiter = 30;
};