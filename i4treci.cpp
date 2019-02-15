#include <iostream>
#include <string>

using namespace std;

struct Kamion
{
	string broj_tablice;
	string ime;
	string prezime;
};

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
	Kamion kam[5];
	string tablica;
	
	kam[0].broj_tablice = "1111";
	kam[0].ime = "Marko";
	kam[0].prezime = "Peric";

	kam[1].broj_tablice = "2222";
	kam[1].ime = "Luka";
	kam[1].prezime = "Sisic";

	kam[2].broj_tablice = "3333";
	kam[2].ime = "Juro";
	kam[2].prezime = "Juric";

	kam[3].broj_tablice = "4444";
	kam[3].ime = "Djuro";
	kam[3].prezime = "Djuric";

	kam[4].broj_tablice = "5666";
	kam[4].ime = "Sisa";
	kam[4].prezime = "Sisic";

	cout << "Upisi broj tablice za pretragu: ";
	getline(cin, tablica);

	pretraga(kam, tablica);

	return 0;
}
