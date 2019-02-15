#include <iostream>

using namespace std;

void suma(int* polje)
{
	int suma = 0;

	for(int i = 0; i < 5; i++)
	{
		if (polje[i] % 5 == 0)
			suma += polje[i];
	}

	cout << "Suma djeljivih sa 5 je: " << suma << endl;
}

int main()
{
	int polje[5] = {5, 10, 12, 25, 13};

	suma(polje);

	return 0;
}
