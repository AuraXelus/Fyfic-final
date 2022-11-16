#include <iostream>
#include "Bebe.h"
using namespace std;

int main()
{
	//Variables
    int quantitéLait;
    int premierBiberonHeure;
    int premierBiberonMinute;
    int intervalHeure;
    int intervalMinute;
    int quantitéParPrise;
    bool test(false);

    //Intro
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "Nous allons commencer par initialiser votre compte" << endl;
    cout << endl;
    cout << endl;
    system("pause");
    
    //Quantité de lait//
    system("cls");
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "   Tout d'abord nous allons vous poser quelque question :" << endl;
    cout << "Quelle quantite de lait vous reste t-il? (en cl)" << endl;
    cin >> quantitéLait;
    do
    {
        if (quantitéLait >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle quantite de lait vous reste t-il? (en cl, veuillez rentrer un entier positif)" << endl;
            cin >> quantitéLait;
        }
        cout << endl;
    } while (test != true);     //Test
    test=false;

    //Heure d'interval//
    system("cls");
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "   Tout d'abord nous allons vous poser quelque question :" << endl;
    cout << "Quelle est l'intervalle de temps entre chaque prise de votre nourrisson? (heure et minute)" << endl;
    //Heure
    cout << "Heure : ";
    cin >> intervalHeure;
    do
    {
        if (intervalHeure >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle est l'intervalle de temps entre chaque prise de votre nourrisson? (heure uniquement)" << endl;
            cout << "Heure : ";
            cin >> intervalHeure;
        }
        cout << endl;
    } while (test != true);     //Test
    test = false;
    //Minute
    cout << "Minute : ";
    cin >> intervalMinute;
    do
    {
        if (intervalMinute >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle est l'intervalle de temps entre chaque prise de votre nourrisson? (minute uniquement)" << endl;
            cout << "Minute : ";
            cin >> intervalMinute;
        }
        cout << endl;
    } while (test != true);     //Test
    test = false;

    //Heure initial//
    system("cls");
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "   Tout d'abord nous allons vous poser quelque question :" << endl;
    cout << "A quelle heure a t-il prit son biberon pour la derniere fois? (heure et minute)" << endl;
    //Heure
    cout << "Heure : ";
    cin >> premierBiberonHeure;
    do
    {
        if (premierBiberonHeure >= 0)
        {
            test = true;
        }
        else
        {
            cout << "A quelle heure a t-il prit son biberon pour la derniere fois? (heure uniquement)" << endl;
            cout << "Heure : ";
            cin >> premierBiberonHeure;
        }
        cout << endl;
    } while (test != true);     //Test
    test = false;
    //Minute
    cout << "Minute : ";
    cin >> premierBiberonMinute;
    do
    {
        if (premierBiberonMinute >= 0)
        {
            test = true;
        }
        else
        {
            cout << "A quelle heure a t-il prit son biberon pour la derniere fois? (minute uniquement)" << endl;
            cout << "Minute : ";
            cin >> premierBiberonMinute;
        }
        cout << endl;
    } while (test != true);     //Test
    test = false;

    //Quantité de lait par prise//
    system("cls");
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "   Tout d'abord nous allons vous poser quelque question :" << endl;
    cout << "Et enfin quelle est la quantite de lait donner par prise? (en cl)" << endl;
    cin >> quantitéParPrise;
    do
    {
        if (quantitéParPrise >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle est la quantite de lait donner par prise? (en cl, veuillez rentrer un entier positif)" << endl;
            cin >> quantitéParPrise;
        }
        cout << endl;
    } while (test != true);     //Test
    test = false;

    //Creation bebe//
    Bebe Timmy(intervalHeure, intervalMinute, premierBiberonHeure, premierBiberonMinute, quantitéParPrise);

    //-Application-//
    //Boucle test (a supprimer après)
        //Temps qui passe
    int h(0), m(0);
    int regurgite;
    char choix;
    bool bouton;
    system("cls");
    while (h < 24)
    {
        //Affichage
        cout << h << "h : " << m << " m" << endl;
        if (h == Timmy.getprochainBiberonHeure() and m == Timmy.getprochainBiberonMinute())
        {
            quantitéLait = Timmy.boireBiberon(quantitéLait);
            cout << "ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!! BIBERON ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!!" << endl;
            cout << endl;
            cout << "A t-il regurgiter" << endl;
            cout << "|1 - Oui" << endl;
            cout << "|2 - Non" << endl;
            cin >> regurgite;
            switch (regurgite)
            {
            case 1:
                bouton = true;
                break;

            case 2:
                bouton = false;
                break;

            default:
                cout << "ERROR" << endl;
                bouton = false;
                break;
            }
            Timmy.regurgiter(bouton);
        }


        cout << "											Il vous reste " << quantitéLait << " cl de lait" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        if (quantitéLait <= 0)
        {
            system("cls");
            cout << "Game Over, votre bebe est mort." << endl;
            cout << "Tu n'as plus besoin de lait maintenant..." << endl;
        }
        if ((0 < quantitéLait) and (quantitéLait <= 150))
        {
            cout << "Attention, le lait va commmencer a vous manquer, je vous conseil de racheter du lait" << endl;
            cout << "Voulez vous racheter du lait? (Y-Oui / N-Non)" << endl;
            cin >> choix;
            if (choix == 'Y')
            {
                system("cls");
                cout << "Tres bien, je viens de declancher la livraison de 5L de lait immediatement" << endl;
                quantitéLait += 500;
            }
        }


        system("pause");
        system("cls");
        m += 30;
        if (m >= 60)
        {
            h++;
            m = 0;
        }
        if (h >= 24)
        {
            h = 0;
        }
    }


	return 0;
}