#include <iostream>
using namespace std;

int main()
{
	int lp = 0;
	int p = 2;
	int n;
	int d;
	bool x;

	cout << "Ile liczb pierwszych chcesz wyświetlić: ";
	cin >> n;

	while (lp < n)
	{
		x = true;
		for (int d = 2; d <= p - 1; d++)
		{
			if (p % d == 0)
			{
				x = false;
			}
		}
		if (x == true) {
			cout << " " << p;
			lp = lp + 1;
		}
		p = p + 1;
	}
}