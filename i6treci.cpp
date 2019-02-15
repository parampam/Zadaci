#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n;
	cout << "Koliko brojeva: ";
	cin >> n;

	ofstream n_brojeva("brojevi.txt");

	for (int i = 0; i <= n; i++)
		n_brojeva << i << endl;
	
	n_brojeva.close();

	ofstream ds2_brojevi("djeljivisa2.txt");
	ifstream brojevi("brojevi.txt");

	while(brojevi >> n)
	{
		if (n % 2 == 0)
			ds2_brojevi << n << endl;
	}

	brojevi.close();
	
	ifstream brojevici("brojevi.txt");
	ofstream ds3_brojevi("djeljivis3.txt");

	while(brojevici >> n)
	{
		if (n % 3 == 0)
			ds3_brojevi << n << endl;
	}

	brojevici.close();
	ds3_brojevi.close();
	ds2_brojevi.close();

	return 0;
}
