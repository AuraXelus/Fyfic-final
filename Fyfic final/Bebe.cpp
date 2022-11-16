#include <iostream>
#include "Bebe.h"
using namespace std;

Bebe::Bebe(int intervalHeure, int intervalMinute, int premierBiberonHeure, int premierBiberonMinute, int quantitéParPrise)
{
    this->m_intervalHeure = intervalHeure;
    this->m_intervalMinute = intervalMinute;
    this->m_prochainBiberonHeure = premierBiberonHeure + m_intervalHeure;
    this->m_prochainBiberonMinute = premierBiberonMinute + m_intervalMinute;
    this->m_quantitéParPrise = quantitéParPrise;
    this->m_regurgiter = false;
}

int Bebe::boireBiberon(int quantiteLait)
{
    //Alerte//
    return quantiteLait -= m_quantitéParPrise;
}

void Bebe::regurgiter(bool bouton)
{
    if (bouton == true)
    {
        cout << "Tres bien une nouvelle alerte vous sera envoyer dans 30 min" << endl;
        m_regurgiter = true;
  
    }
    if (bouton == false)
    {
        m_regurgiter = false;
    }

    heureProchainBiberon(m_prochainBiberonHeure, m_prochainBiberonMinute);
}

//Ancien biberon est en fait le changement de prochain biberon
void Bebe::heureProchainBiberon(int ancienBiberonHeure, int ancienBiberonMinute)
{
    if (m_regurgiter == true)
    {
        m_prochainBiberonMinute = ancienBiberonMinute + m_intervalRegurgiter;
        if (m_prochainBiberonMinute >= 60)
        {
            m_prochainBiberonMinute -= 60;
            m_prochainBiberonHeure = ancienBiberonHeure + 1;
        }
        else
        {
            m_prochainBiberonHeure = ancienBiberonHeure + 0;

        }
    }
    else if (m_regurgiter == false)
    {
        m_prochainBiberonMinute = ancienBiberonMinute + m_intervalMinute;
        if (m_prochainBiberonMinute >= 60)
        {
            m_prochainBiberonMinute -= 60;
            m_prochainBiberonHeure = ancienBiberonHeure + m_intervalHeure +1;
        }
        else
        {
            m_prochainBiberonHeure = ancienBiberonHeure + m_intervalHeure;

        }
    }
}

int Bebe::getprochainBiberonHeure()
{
    return m_prochainBiberonHeure;
}

int Bebe::getprochainBiberonMinute()
{
    return m_prochainBiberonMinute;
}