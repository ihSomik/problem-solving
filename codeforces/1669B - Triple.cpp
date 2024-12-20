#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int solve()
{
    int n;
    cin >> n;
    map<int, int> p;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        p[a]++;
        if (p[a] == 3)
            ans = a;
    }
    cout << ans << endl;
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