// Playlist
// https://cses.fi/problemset/task/1141
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, bool> found;
    int i = 0, j = 0, len = 0, maxLen = 0;
    while (j < n)
    {
        if (found.find(a[j]) == found.end() || found[a[j]] == false) 
        {
            len++;
            maxLen = max(len, maxLen);
            found[a[j]] = true;
            j++;
        }
        else
        {
            len--;
            found[a[i]] = false;
            i++;
        }
    }
    cout << maxLen << endl;

    return 0;
}