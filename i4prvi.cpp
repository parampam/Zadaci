#include <iostream>
#include <string>

using namespace std;

struct Knjiga
{
	string autor;
	string naslov;
	int broj_stranica;
};

int main()
{
	Knjiga book;
	
	cout << "Upisi autora knjige: ";
	getline(cin, book.autor);

	cout << "Upisi naslov knjige: ";
	getline(cin, book.naslov);

	cout << "Upisi broj stranica knjige: ";
	cin >> book.broj_stranica;
	cin.ignore();

	cout << "Ispis: " << endl;
	cout << "Autor: " << book.autor << endl;
	cout << "Naslov: " << book.naslov << endl;
	cout << "Broj stranica: " << book.broj_stranica << endl;	

	return 0;
}
