#include <iostream>

using namespace std;

struct Pravokutnik
{
	float sirina;
	float visina;
};

void povrsina(Pravokutnik pra1, Pravokutnik pra2)
{
	cout << "Ukupna povrsina je: " << (pra1.sirina * pra1.visina) + (pra2.sirina * pra2.visina) << endl;
}

int main()
{
	Pravokutnik pra1, pra2;

	cout << "Daj mi sirinu za prvi pravokutnik: ";
	cin >> pra1.sirina;
	cout << "Daj mi visinu za prvi pravokutnik: ";
	cin >> pra1.visina;
	cout << "Daj mi sirinu za drugi pravokutnik: ";
	cin >> pra2.sirina;
	cout << "Daj mi visinu za drugi pravokutnik: ";
	cin >> pra2.visina;

	povrsina(pra1, pra2);


	return 0;
}
