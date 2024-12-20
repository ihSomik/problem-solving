#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n];

        for (int i = 0; i < n; i++)
            p[i] = i + 1;

        for (int i = 0, j = n - 1; i < n / 2; i++, j--)
            swap(p[i], p[j]);

        if (n & 1)
            swap(p[n / 2], p[(n / 2) + 1]);

        for (int i = 0; i < n; i++)
            cout << p[i] << " ";

        cout << endl;
    }
    return 0;
}