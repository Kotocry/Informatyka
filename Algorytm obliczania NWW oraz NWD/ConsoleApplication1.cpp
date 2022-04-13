#include<iostream>

using namespace std;

int main()
{
	int a;
	int n;
	int i;
	int b;
	cout << "Podaj a: ";
		cin >> a;
	cout << "Podaj b: ";
		cin >> b;
	i = a * b;

	while(a != b)
	{
		if(a < b)
		{
			b = b - a;
		}
		else
		{
			a = a - b;
		}
		n = i / a;
	}
	cout << "NWD: " << a;
	cout << "NWW: " << n;
}