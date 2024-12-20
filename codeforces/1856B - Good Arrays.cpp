#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int solve(int a[], int n)
{

    if (n == 1)
        return 0;

    ll sum(0);
    for (int i = 0; i < n; i++)
        sum += a[i];

    for (int i = 0; i < n && sum >= 0; i++)
        if (a[i] == 1)
            sum -= 2;
        else
            sum--;

    if (sum < 0)
        return 0;
    else
        return 1;
}

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

        if (solve(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}