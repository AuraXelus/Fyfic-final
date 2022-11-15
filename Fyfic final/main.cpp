#include <iostream>
using namespace std;

int main()
{
	//Variables
    int quantitéLait;
    int premierBiberon(0);
    int intervalHeure(0);
    int intervalMinute(0);
    int quantitéParPrise(0);
    bool test(false);

    //Intro
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "Nous allons commencer par initialiser votre compte" << endl;
    cout << endl;
    cout << endl;
    system("pause");
    
    system("cls");
    cout << "                                              Bienvenue dans l'application Fyfic" << endl;
    cout << endl;
    cout << "Tout d'abord nous allons vous poser quelque question :" << endl;
    cout << "Quelle quantite de lait vous reste t-il?" << endl;
    cin >> quantitéLait;
    //Verification 
    do
    {
        if (quantitéLait >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle quantite de lait vous reste t-il? (veuillez rentrer un entier positif)" << endl;
            cin >> quantitéLait;
        }
        cout << endl;
    } while (test != true);
    test=false;


    //Interface
	return 0;
}