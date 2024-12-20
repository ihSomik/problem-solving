#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    pair<int, int> a[1000];

    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a, a + n);

    int flag(1);
    for (int i = 0; i < n; i++)
    {
        if (s <= a[i].first)
        {
            flag = 0;
            break;
        }
        else
        {
            s += a[i].second;
            flag = 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}