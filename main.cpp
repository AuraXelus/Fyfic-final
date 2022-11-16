#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdbool.h>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;
//Désactive le message d'erreur lié à ctime
#pragma warning( disable : 4996 )

int bibjour;
int quantbib;
vector <int> hbib;
string courses;
bool profil = false;
bool heure = false;
string global;


void affiche() {

	if (profil == false) {
		global = "\nVous n'avez pas défini d'heure de prise\n";
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
		global = "\nListe de course :\n";
		for (int i = 0; i < courses.size(); i++) {
			global += courses[i] + "\n";
		}
		global += "\n\n1->Ajouter un article\n2->supprimer la liste\n3->Retour au menu\n";
		cin >> a;

		if (a == 1) {
			global = "\nAvec quoi voulez-vous nourir le enfant ?\n";
			a = 0;
			string j;
			cin >> j;
			courses += j;
			courses += ", ";
		}

		else if (a == 2) {
			courses = " ";
		}
		else {
			global = "\nRetour au menu\n";
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




/************************************************/

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

void DiplayProduit(Produit P) {
	global = P.qProduit + ", " + P.nProduit;
}

void ShowedList(const vector<Produit>& L) {
	for (Produit P : L) {
		DiplayProduit(P);
	}
}

void InitListe(vector<Produit>& L) {
	string n; int q;
	int a;

	do {

		global = "\Liste de course :\n";
		ShowedList(L);

		global =  "\n\n1->Ajouter un article\n2->supprimer la liste\n3->Retour au menu\n";
		cin >> a;

		if (a == 1) {
			global = "nom produit ?";
			cin >> n;
			global = "quantite ? ";
			cin >> q;
			L.push_back(InitProduit(n, q));
		}

		else if (a == 2) {
			L.resize(0);
		}
		else {
			global =  "\nRetour au menu\n";
		}
	} while (a < 3);

}



void DisplayTime() {

	bool boucle = true;
	while (boucle) {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		cout << "Time: " << ltm->tm_hour << ":";
		cout << ltm->tm_min << ":";
		cout << ltm->tm_sec;
		cout << "\n";

		cout << global;

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
	}
}

int main() {
	int rep;

	std::thread first (DisplayTime);
	first.detach();

	vector<Produit> ListCours;

	/*cout << getheure() << " : " << getmin();*/

	do {

		if (profil == false) {
			global = "\nQue voulez vous faire ?\n1 -> Creer le profil \n2 -> Afficher heure de prise du biberon \n3 -> Liste de courses \n4 -> Quitter\n";
		}

		else {
			global = "\nQue voulez vous faire ?\n1 -> Redefinir le profil \n2 -> Afficher heure de prise du biberon \n3 -> Liste de courses \n4 -> Quitter\n";
		}
		cin >> rep;

		if (rep == 1) {
			profiluser();
		}

		else if (rep == 2) {
			affiche();
		}

		else if (rep == 3) {
			//liste();
			InitListe(ListCours);

		}

		else if (rep == 4) {
			return 0;
		}

	} while (rep == 1 || rep == 2 || rep == 3 || rep == 4);
}