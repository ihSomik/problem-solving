#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i], a[i] = a[i] & 1;

    for (int i = 0; i < n; i++)
    {
        if (!(i & 1) && a[i] != a[0])
        {
            cout << "NO" << endl;
            return;
        }
        else if ((i & 1) && a[i] != a[1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
        solve();
        
    return 0;
}