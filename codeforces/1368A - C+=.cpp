#include <bits/stdc++.h>
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        ll sum(0);
        int operations(0);
        while (sum <= n)
        {
            if (a > b)
            {
                b += a;
                sum = b;
                operations++;
            }
            else
            {
                a += b;
                sum = a;
                operations++;
            }
        }
        cout << operations << endl;
    }

    return 0;
}