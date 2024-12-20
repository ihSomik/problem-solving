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
        int a[2 * n];
        int x[51] = {0};
        int p[n];

        for (int i = 0, j = 0; i < 2 * n; i++)
        {
            cin >> a[i];

            if (!x[a[i]]) // checking if a[i] not found before
            {
                p[j] = a[i];
                j++;
                x[a[i]]++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << p[i] << " ";
        cout << endl;
    }

    return 0;
}