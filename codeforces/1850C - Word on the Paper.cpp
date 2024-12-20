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
        char ch[64];
        for (int i = 0; i < 64; i++)
            cin >> ch[i];

        for (int i = 0; i < 64; i++)
            if (ch[i] != '.')
                cout << ch[i];

        cout << endl;
    }
    return 0;
}