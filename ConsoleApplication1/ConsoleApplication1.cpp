#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s; 
    int k;
    cout << "Podaj słowo: ";
    getline(cin, s);
    cout << "Podaj liczbę: ";
    cin >> k;

    for (auto& c : s)
    {
        if (c >= 'a' && c <= 'z')
            c = ((c - 'a' + k) % 26) + 'a';
        else if (c >= 'A' && c <= 'Z')
            c = ((c - 'A' + k) % 26) + 'A';
    }

    cout << s << endl;
}