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
        char a[11][11];
        int points(0);
        for (int i = 1; i < 11; i++)
        {
            for (int j = 1; j < 11; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    points += min(min(i, 11 - i), min(j, 11 - j));
            }
        }
        cout << points << endl;
    }

    return 0;
}