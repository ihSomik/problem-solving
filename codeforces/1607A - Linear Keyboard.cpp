#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string kb, s;
        cin >> kb >> s;

        map<char, int> mp;

        for (int i = 0; i < 26; i++)
            mp[kb[i]] = i;

        int time(0);
        for (int i = 0; i < s.length() - 1; i++)
            time += abs(mp[s[i]] - mp[s[i + 1]]);

        cout << time << endl;
    }

    return 0;
}