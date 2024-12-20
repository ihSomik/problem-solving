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
        ll a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        ll ans(0);
        for (int i = 0; i < m; i++)
        {
            vector<ll> temp;
            ll sum(0);
            for (int j = 0; j < n; j++)
            {
                temp.push_back(a[j][i]);
                sum += a[j][i];
            }
            ll curr(0);
            sort(temp.begin(), temp.end());
            for (int j = 0; j < n; j++)
            {
                curr += temp[j];
                ans += abs((sum - curr) - (n - 1 - j) * temp[j]);
            }
        }

        cout << ans << endl;
    }
}
