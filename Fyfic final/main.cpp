#include <iostream>
using namespace std;

int main()
{
	//Variables
    int quantit�Lait;
    int premierBiberon(0);
    int intervalHeure(0);
    int intervalMinute(0);
    int quantit�ParPrise(0);
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
    cin >> quantit�Lait;
    //Verification 
    do
    {
        if (quantit�Lait >= 0)
        {
            test = true;
        }
        else
        {
            cout << "Quelle quantite de lait vous reste t-il? (veuillez rentrer un entier positif)" << endl;
            cin >> quantit�Lait;
        }
        cout << endl;
    } while (test != true);
    test=false;


    //Interface
	return 0;
}