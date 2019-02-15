#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Adresa
{
	string ulica;
	int kucni_broj;
	int postanski_broj;
};

int main()
{
	Adresa adrese[3];

	adrese[0].ulica = "Ulica lipa";
	adrese[0].kucni_broj = 12;
	adrese[0].postanski_broj = 22222;

	adrese[1].ulica = "Ulica sisavaca";
	adrese[1].kucni_broj = 13;
	adrese[1].postanski_broj = 33333;
	
	adrese[2].ulica = "Ulica zeca";
	adrese[2].kucni_broj = 14;
	adrese[2].postanski_broj = 11111;

	ofstream datoteka("adrese");

	for (int i = 0; i < 3; i++)
	{
		datoteka << adrese[i].ulica << ", " << adrese[i].kucni_broj << ", " << adrese[i].postanski_broj << endl;
	}


	return 0;
}
