#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	string s;

	cout << "Koliko stringova zelis ucitati: ";
	cin >> n;
	cin.ignore();

	vector<string> vec(n);

	for (int i = 0; i < n; i++)
	{
		cout << "Upisi " << i+1 << ". string: ";
		getline(cin, s);
		vec[i] = s;
	}

	for (int i = n-1; i >= 0; i--)
		cout << vec[i] << endl;

	return 0;
}
