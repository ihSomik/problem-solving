#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int op(0);
    while (1)
    {
        if (x.find(s) != -1)
        {
            cout << op << endl;
            return;
        }
        x += x;
        n += n;
        op++;
        if (n > 100)
            break;
    }
    cout << -1 << endl;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
        solve();
}