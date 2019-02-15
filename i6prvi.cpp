#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream datoteka("automobili.txt"); // DATOTEKU TREBAM SAM KREIRATI TAMO GDJE JE FILE OD OVOG PROGRAMA
	string s;

	while (getline(datoteka, s))
		cout << s << endl;

	return 0;
}

