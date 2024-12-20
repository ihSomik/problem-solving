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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<int> b;
    b = a;
    sort(b.begin(), b.end());

    int flag(0);
    for (int i = 0; i < n; i++)
    {
        if ((b[i] & 1) != (a[i] & 1))
        {
            cout << "NO" << endl;
            return;
        }
        else
            flag = 1;
    }

    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
}

int main()
{
    fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}