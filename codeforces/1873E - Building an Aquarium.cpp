#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    fastread();

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 1, r = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            
            int sum(0);
            for (int i = 0; i < n; i++)
            {
                sum += mid - min(mid, a[i]);
                if (sum > x)
                    break;
            }

            if (sum > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        cout << r << endl;
    }

    return 0;
}