// Forest Queries
// https://cses.fi/problemset/task/1652
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1][n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + (c == '*');
            // The expression (c == '*') will return 1 if the character c is equal to the asterisk '*' character, and 0 otherwise.
        }
    }

    while (q--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << (a[y2][x2] - a[y2][x1 - 1] - a[y1 - 1][x2] + a[y1 - 1][x1 - 1]) << endl;
    }

    return 0;
}