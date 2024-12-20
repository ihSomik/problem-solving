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
        int n;
        cin >> n;
        int sPoly, ePoly;
        cin >> sPoly >> ePoly;

        vector<pair<int, int>> p(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> p[i].first >> p[i].second;

        sort(p.rbegin(), p.rend());

        int found(0);
        for (int i = 0; i < n - 1; i++)
        {
            if (p[i].first >= sPoly && p[i].second >= ePoly)
                found = 1;
        }

        if (found)
            cout << -1 << endl;
        else
            cout << sPoly << endl;
    }

    return 0;
}
