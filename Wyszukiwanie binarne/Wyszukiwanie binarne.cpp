#include<iostream>
using namespace std;

int main()
{
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int liczba;
	int n = 15, l, p, sr;
	cout << "Zawartosc tablicy: ";
	for (int i = 0; i < n; i++)
		cout << "tablica [" << i + 1 << "] = " << tab[i] << endl;
	cout << "Podaj szukany element: ";
	cin >> liczba;
	l = 0;
	p = n - 1;
	while (true)
	{
		if (l > p)
		{
			cout << "Nie odnaleziono szukanego elementu" << endl;
			break;
		}
		sr = (l + p) / 2;
		if (tab[sr] == liczba)
		{
			cout << "Odnaleziono liczbe " << liczba << " pod indeksem " << sr + 1 << endl;
			break;
		}
		else if (tab[sr] < liczba)
			l = sr + 1;
		else
			p = sr - 1;
	}
	return 0;
}