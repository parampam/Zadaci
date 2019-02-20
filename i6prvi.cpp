#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream datoteka("automobili.txt"); // Datoteku kreiram sam, tamo gdje je ovaj cpp file
	string s;

	while (getline(datoteka, s))
		cout << s << endl;

	return 0;
}

