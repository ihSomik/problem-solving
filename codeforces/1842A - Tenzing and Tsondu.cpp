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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        ll sumA(0), sumB(0);
        while (n--)
        {
            cin >> a[n];
            sumA += a[n];
        }
        while (m--)
        {
            cin >> b[m];
            sumB += b[m];
        }

        if (sumA > sumB)
            cout << "Tsondu" << endl;
        else if (sumA < sumB)
            cout << "Tenzing" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}