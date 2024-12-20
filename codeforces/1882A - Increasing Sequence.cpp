#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0, k = 1; i < n; i++, k++)
        {
            b[i] = k;
            if (b[i] == a[i])
            {
                b[i]++;
                k = b[i];
            }
        }
        cout << b[n - 1] << endl;
    }
}