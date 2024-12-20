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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int operations(0);
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
                operations = max(operations, a[i]);

        cout << operations << endl;
    }
    return 0;
}