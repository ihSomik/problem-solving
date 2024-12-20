#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n + 1];
    int d[100001] = {0};
    bool found[100001] = {false};

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
    {
        if (!found[a[i]])
            d[i] = 1;
        found[a[i]] = true;
    }
    for (int i = n - 1; i >= 1; i--)
        d[i] += d[i + 1];
    /*
        a          --> 1 2 3 1 2 3
        d          --> 0 0 0 1 1 1  ( <-- )
        d(updated) --> 3 3 3 3 2 1
    */
    while (m--)
    {
        int l;
        cin >> l;
        cout << d[l] << endl;
    }

    return 0;
}