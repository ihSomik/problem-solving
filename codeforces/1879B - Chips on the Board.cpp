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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        auto minA = min_element(a.begin(), a.end());
        auto minB = min_element(b.begin(), b.end());

        ll sum1(0);
        for (int i = 0; i < n; i++)
            sum1 += b[i] + *minA;

        ll sum2(0);
        for (int i = 0; i < n; i++)
            sum2 += a[i] + *minB;

        cout << min(sum1, sum2) << endl;
    }

    return 0;
}