#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdbool.h>
#include <ctime>
using namespace std;
//Désactive le message d'erreur lié à ctime
#pragma warning( disable : 4996 )

int bibjour;
int quantbib;
vector <int> hbib;
string courses;
bool profil = false;
bool heure = false;


void affiche() {

	if (profil == false) {
		cout << "\nVous n'avez pas défini d'heure de prise\n";
	}

	else {
		cout << "\nVous devez nourir votre progéniture à :\n";
		for (int i = 0; i < bibjour; i++) {
			cout << hbib[i];
			cout << "h\n";
		}
		system("pause");
	}


}

void profiluser() {

	hbib.clear();
	cout << "\nModification du profil :\nCombien de fois nourrissez vous votre progeniture chaque jour ?\n";
	cin >> bibjour;

	cout << "\nCombien de lait mettez vous dans le biberon ? (en centilitre)\n";
	cin >> quantbib;

	cout << "\nA quelles heures voulez-vous le nourir ?\n";
	int j;
	for (int i = 0; i < bibjour; i++) {
		cin >> j;
		hbib.push_back(j);
	}
	profil = true;
}

void liste() {
	int a;

	do {
		cout << "\nListe de course :\n";
		for (int i = 0; i < courses.size(); i++) {
			cout << courses[i];
		}
		cout << "\n\n1->Ajouter un article\n2->supprimer la liste\n3->Retour au menu\n";
		cin >> a;

		if (a == 1) {
			cout << "\nAvec quoi voulez-vous nourir le enfant ?\n";
			a = 0;
			string j;
			cin >> j;
			courses += j;
			courses += ", ";
		}
		/*else if (a == 2) {
			cout << "Quel article voulez-vous supprimer ?";
			for (int i = 0; i < courses.size(); i++) {
				cout << i + 1 << " -> " << courses[i];
			}
		}*/
		else if (a == 2) {
			courses = " ";
		}
		else {
			cout << "\nRetour au menu\n";
		}
	} while (a < 3);
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

int main() {
	int rep;

	/*bool boucle = true;
	while (boucle) {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		cout << "Time: " << ltm->tm_hour << ":";
		cout << ltm->tm_min << ":";
		cout << ltm->tm_sec;
		cout << "\n";
	}*/

	cout << getheure() << " : " << getmin();

	do {

		if (profil == false) {
			cout << "\nQue voulez vous faire ?\n1 -> Creer le profil \n2 -> Afficher heure de prise du biberon \n3 -> Liste de courses \n4 -> Quitter\n";
		}

		else {
			cout << "\nQue voulez vous faire ?\n1 -> Redefinir le profil \n2 -> Afficher heure de prise du biberon \n3 -> Liste de courses \n4 -> Quitter\n";
		}
		cin >> rep;

		if (rep == 1) {
			profiluser();
		}

		else if (rep == 2) {
			affiche();
		}

		else if (rep == 3) {
			liste();
		}

		else if (rep == 4) {
			return 0;
		}

	} while (rep == 1 || rep == 2 || rep == 3 || rep == 4);
}