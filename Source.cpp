#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdbool.h>
using namespace std;

int bibjour;
int quantbib;
vector <int> hbib;
vector <string> courses;
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
	cout << "\nListe de course :\n1 -> Modifier la liste\n2 -> Retour au menu\n";
	for (int i = 0; i < courses.size(); i++) {
		cout << courses[i] << ", ";
	}
	cin >> a;

	if (a == 1) {
		cout << "\nAvec quoi voulez-vous nourir le enfant ?\nAppuyez sur 1 pour quitter\n";
		int j;

		do {
			cin >> j;
		} while (a != 1);
	}

	else {
		cout << "\nRetour au menu\n";
	}
}

int main() {
	int rep;

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