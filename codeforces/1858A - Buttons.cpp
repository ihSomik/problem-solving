#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        ll turnsOfAnna = (c + 1) / 2 + a;
        ll turnsOfKatie = (c / 2) + b;

        if (turnsOfAnna > turnsOfKatie)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}