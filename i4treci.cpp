#include <iostream>
#include <string>

using namespace std;

// Deklaracija strukture
struct Kamion
{
	string broj_tablice;
	string ime;
	string prezime;
};

// Funkcija koja provjerava postoji li broj tablice u nekom arrayu od 5 elemenata
void pretraga(Kamion* kam, string tablica)
{
	for (int i = 0; i < 5; i++)
	{
		if (kam[i].broj_tablice == tablica)
		{
			cout << "Ime i prezime vlasnika je: " << kam[i].ime << " " << kam[i].prezime << endl;
			return;
		}
	}

	cout << "Zao mi je, nemamo taj broj tablice u sustavu" << endl;
}

int main()
{
	// Kreiranje polja od pet elemenata ciji je svaki element Kamion
	Kamion kam[5];
	
	string tablica;
	
	// Dodjeljivanje vrijednosti varijablama u svakom elementu
	kam[0].broj_tablice = "11111";
	kam[0].ime = "Marko";
	kam[0].prezime = "Supak";

	kam[1].broj_tablice = "22222";
	kam[1].ime = "Petar";
	kam[1].prezime = "Baksuz";

	kam[2].broj_tablice = "333333";
	kam[2].ime = "Jurica";
	kam[2].prezime = "Juric";

	kam[3].broj_tablice = "444444";
	kam[3].ime = "Luka";
	kam[3].prezime = "Burek";

	kam[4].broj_tablice = "555555";
	kam[4].ime = "Sisko";
	kam[4].prezime = "Slanac";

	cout << "Upisi broj tablice za pretragu: ";
	getline(cin, tablica);

	// Pozivanje funkcije
	pretraga(kam, tablica);

	return 0;
}
