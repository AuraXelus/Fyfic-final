#include <iostream>
#include <ctime>
#include <chrono>
#include <vector>
#include "Bebe.h"
#pragma warning( disable : 4996 )
using namespace std;

//Variables
int quantitéLait;
int premierBiberonHeure;
int premierBiberonMinute;
int intervalHeure;
int intervalMinute;
int quantitéParPrise;
bool test(false);

Bebe Timmy(intervalHeure, intervalMinute, premierBiberonHeure, premierBiberonMinute, quantitéParPrise);
int regurgiteChoix;
bool bouton;

void intro()
{
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
    test = false;

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
}

time_t getheure() {

    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    tm* ltm = localtime(&now);

    time_t heure = ltm->tm_hour;
    return heure;
}

time_t getmin() {

    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    tm* ltm = localtime(&now);

    time_t minute = ltm->tm_min;
    return minute;
}

void alerte()
{
    if (getheure() == Timmy.getprochainBiberonHeure() and getmin() == Timmy.getprochainBiberonMinute())
            {
                quantitéLait = Timmy.boireBiberon(quantitéLait);
                cout << "ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!! BIBERON ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!!" << endl;
                cout << endl;
                cout << "A t-il regurgiter" << endl;
                cout << "|1 - Oui" << endl;
                cout << "|2 - Non" << endl;
                cin >> regurgiteChoix;
                switch (regurgiteChoix)
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
}

void setting()
{
    system("cls");
    int settingChoix;
    cout << "Quel parametre voulez vous changer?" << endl;
    cout << endl;
    cout << "| 1-Interval entre deux prises" << endl;
    cout << "| 2-Quantite de lait par prise" << endl;
    cout << "| 3-Retour au menu" << endl;
    cin >> settingChoix;
    switch (settingChoix)
    {
    case 1:
        system("cls");
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
        Timmy.setIntervalHeure(intervalHeure);
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
        Timmy.setIntervalMinute(intervalMinute);
        break;

    case 2:
        system("cls");
        cout << "Quelle est la quantite de lait donner par prise? (en cl)" << endl;
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
        Timmy.setQuantiteParPrise(quantitéParPrise);
        break;

    default:
        break;
    }

}

struct Produit {
    string nProduit;
    int qProduit = NULL;
};

Produit InitProduit(string n, int q) {
    Produit P;
    P.nProduit = n;
    P.qProduit = q;
    return P;
}

vector<Produit> ListCours;

void DiplayProduit(Produit P) {
    cout << P.qProduit << ", " << P.nProduit << "\n";
}

void ShowedList(const vector<Produit>& L) {
    for (Produit P : L) {
        DiplayProduit(P);
    }
}

void liste(vector<Produit>& L) {
    string n; int q;
    int a;

    do {
        system("cls");
        cout << "\Liste de course :\n\n";
        ShowedList(L);

        cout << "\n\n1->Ajouter un article\n2->Supprimer la liste\n3->Retour au menu\n";
        cin >> a;

        if (a == 1) {
            cout << "Nom de produit: ";
            cin >> n;
            cout << "Quantite voulu: ";
            cin >> q;
            L.push_back(InitProduit(n, q));
        }

        else if (a == 2) {
            L.resize(0);
        }
        else {
            
        }
    } while (a < 3);

}

int main()
{
    intro();
 
    //Menue
    int choixMenu;
    bool  sortirMenu(false);
    do {
        system("cls");
        alerte();
        cout << "Menu :" << endl;
        cout << endl;
        cout << "| 1-Setting" << endl;
        cout << "| 2-Liste de course" << endl;
        cout << "| 3-Quitter application" << endl;
        cin >> choixMenu;
        switch (choixMenu)
        {
        case 1:
            setting();
            break;

        case 2:
            liste(ListCours);
            break;

        case 3:
            sortirMenu = true;
            break;

        default:
            break;
        }
    } while (sortirMenu == false);

    //-Application-//
    //Temps qui passe
    //int h = 10;
    //int regurgite;
    //char choix;
    //bool bouton;
    //system("cls");
    //while (h < 24)
    //{
    //    //Affichage
    //    //cout << h << "h : " << m << " m" << endl;
    //    if (getheure() == Timmy.getprochainBiberonHeure() and getmin() == Timmy.getprochainBiberonMinute())
    //    {
    //        quantitéLait = Timmy.boireBiberon(quantitéLait);
    //        cout << "ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!! BIBERON ALERTE!!! ALERTE!!! ALERTE!!! ALERTE!!!" << endl;
    //        cout << endl;
    //        cout << "A t-il regurgiter" << endl;
    //        cout << "|1 - Oui" << endl;
    //        cout << "|2 - Non" << endl;
    //        cin >> regurgite;
    //        switch (regurgite)
    //        {
    //        case 1:
    //            bouton = true;
    //            break;

    //        case 2:
    //            bouton = false;
    //            break;

    //        default:
    //            cout << "ERROR" << endl;
    //            bouton = false;
    //            break;
    //        }
    //        Timmy.regurgiter(bouton);
    //    }


    //    cout << "											Il vous reste " << quantitéLait << " cl de lait" << endl;
    //    cout << endl;
    //    cout << endl;
    //    cout << endl;
    //    if (quantitéLait <= 0)
    //    {
    //        system("cls");
    //        cout << "Game Over, votre bebe est mort." << endl;
    //        cout << "Tu n'as plus besoin de lait maintenant..." << endl;
    //    }
    //    if ((0 < quantitéLait) and (quantitéLait <= 150))
    //    {
    //        cout << "Attention, le lait va commmencer a vous manquer, je vous conseil de racheter du lait" << endl;
    //        cout << "Voulez vous racheter du lait? (Y-Oui / N-Non)" << endl;
    //        cin >> choix;
    //        if (choix == 'Y')
    //        {
    //            system("cls");
    //            cout << "Tres bien, je viens de declancher la livraison de 5L de lait immediatement" << endl;
    //            quantitéLait += 500;
    //        }
    //    }
    //}


    return 0;
}