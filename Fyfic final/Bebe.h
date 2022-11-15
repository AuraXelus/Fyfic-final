#pragma once

class Bebe
{
public:
	Bebe(int intervalHeure, int intervalMinute, int premierBiberonHeure, int premierBiberonMinute, int quantitéParPrise);

private:
    int m_intervalHeure;
    int m_intervalMinute;
    int m_premierBiberonHeure;
    int m_premierBiberonMinute;
    int m_quantitéParPrise;

};