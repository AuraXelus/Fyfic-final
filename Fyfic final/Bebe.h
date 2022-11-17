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

    //Set
    void setIntervalHeure(int intervalHeure);
    void setIntervalMinute(int intervalMinute);
    void setQuantiteParPrise(int quantitéParPrise);

private:
    int m_intervalHeure;
    int m_intervalMinute;
    int m_prochainBiberonHeure;
    int m_prochainBiberonMinute;
    int m_quantiteParPrise;
    bool m_regurgiter;
    const int m_intervalRegurgiter = 30;
};