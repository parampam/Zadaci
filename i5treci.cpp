#include <iostream>

using namespace std;

void obrnuto(char* polje, char* polje2)
{
	int n = 0;
	for (int i = 4; i >= 0; i--)
	{
		polje2[n] = polje[i];
       		n++;	
	}
}

int main()
{
	char polje[5] = {'a', 'b', 'c', 'd', 'e'};
	char polje2[5];

	obrnuto(polje, polje2);

	for (int i = 0; i < 5; i++)
		cout << polje2[i] << endl;

	return 0;
}
