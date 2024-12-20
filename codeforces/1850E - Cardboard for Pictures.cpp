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
        int s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        ll l = 1, h = 1e9, mid, w;
        while (l <= h)
        {
            ll area(0);
            mid = l + (h - l) / 2;

            for (int i = 0; i < n; i++)
            {
                area += (s[i] + mid + mid) * (s[i] + mid + mid);
                if (area > c)
                    break;
            }

            if (area == c)
            {
                w = mid;
                break;
            }
            else if (area > c)
                h = mid - 1;
            else
                l = mid + 1;
        }
        cout << w << endl;
    }
    return 0;
}