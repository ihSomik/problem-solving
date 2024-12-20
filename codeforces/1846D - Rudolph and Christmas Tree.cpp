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
        ll n, d, h;
        cin >> n >> d >> h;
        int y[n];
        for (int i = 0; i < n; i++)
            cin >> y[i];

        double area = (n * d * h) / 2.0;

        for (int i = 0; i < n - 1; i++)
        {
            ll hPrime = y[i] + h - y[i + 1];
            if (y[i + 1] < y[i] + h)                       // excluding the common portion of multiple triangle
                area -= (hPrime)*d * (hPrime) / (2.0 * h); // for congruent triange, d'/d = h'/h
        }

        cout << fixed << setprecision(6) << area << endl;
    }

    return 0;
}