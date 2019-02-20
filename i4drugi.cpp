#include <iostream>

using namespace std;

struct Pravokutnik
{
	double sirina;
	double visina;
};

void povrsina(Pravokutnik pr_jedan, Pravokutnik pr_dva)
{
	cout << "Ukupna povrsina je: " << (pr_jedan.sirina * pr_jedan.visina) + (pr_dva.sirina * pr_dva.visina) << endl;
}

int main()
{
	Pravokutnik pr_one, pr_two;

	cout << "Sirina prvog pravokutnika: ";
	cin >> pr_one.sirina;
	cout << "Visina prvog pravokutnika: ";
	cin >> pr_one.visina;
	cout << "Sirina drugog pravokutnika: ";
	cin >> pr_two.sirina;
	cout << "Visina drugog pravokutnika: ";
	cin >> pr_two.visina;

	povrsina(pr_one, pr_two);

	return 0;
}
