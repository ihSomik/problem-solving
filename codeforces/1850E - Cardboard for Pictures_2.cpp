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
        ll c;
        cin >> n >> c;
        ll s_sum(0), s_sqr_sum(0);
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            s_sum += s;
            s_sqr_sum += s * s;
        }
        /*
            (s1 + 2w) ^ 2 + (s2 + 2w) ^ 2 + ... = c
            from quadratic formula,
            w = (-s_sum + sqrt((s_sum * s_sum) - n * s_sqr_sum + n * c)) / (2 * n)
        */

        ll w = (sqrt((s_sum * s_sum / n) - s_sqr_sum + c) / (2 * sqrt(n))) - (s_sum / (2 * n));
        cout << w << endl;
    }
    return 0;
}