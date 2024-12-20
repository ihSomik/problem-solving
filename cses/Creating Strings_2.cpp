// Creating Strings
// https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>
using namespace std;

set<string> perms;

void permute(string s, int l, int r)
{
    if (l == r)
        perms.insert(s);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permute(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    string s;
    cin >> s;

    permute(s, 0, s.length() - 1);

    cout << perms.size() << endl;
    for (auto perm : perms)
        cout << perm << endl;

    return 0;
}
