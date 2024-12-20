#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    while (m--)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    while (n--)
    {
        string c;
        cin >> c;
        if (mp[c].length() < c.length())
            cout << mp[c] << " ";
        else
            cout << c << " ";
    }

    return 0;
}