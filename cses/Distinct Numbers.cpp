// Distinct Numbers
// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    int d = n;
    for (int i = 0; i < n - 1; i++)
        if (x[i] == x[i + 1])
            d--;

    cout << d << endl;
}
