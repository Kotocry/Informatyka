#include <iostream>
using namespace std;

int main()
{
	int lp = 0;
	int p = 2;
	int n;
	int d;
	bool a = true;

	cout << "Ile liczb pierwszych chcesz wyświetlić: ";
	cin >> n;

	while (lp < n)
	{
		for (int d = 2 + 1; d <= p - 1; d++)
		{
			if (p % d == 0)
			{
				p = p + 1;
				a = false;
			}
		}
		if () {
			cout << p << endl;
			lp = lp + 1;
		}
		p = p + 1;
	}
}