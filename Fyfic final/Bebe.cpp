#include <iostream>
#include "Bebe.h"
using namespace std;

Bebe::Bebe(int intervalHeure, int intervalMinute, int premierBiberonHeure, int premierBiberonMinute, int quantitéParPrise)
{
    this->m_intervalHeure = intervalHeure;
    this->m_intervalMinute = intervalMinute;
    this->m_premierBiberonHeure = premierBiberonHeure;
    this->m_premierBiberonMinute = premierBiberonMinute;
    this->m_quantitéParPrise = quantitéParPrise;
}