// Static Range Sum Queries
// https://cses.fi/problemset/task/1646
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long x[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        x[i] += x[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << x[b] - x[a - 1] << endl;
    }
    return 0;
}