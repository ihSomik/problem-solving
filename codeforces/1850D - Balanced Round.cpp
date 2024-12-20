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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int count = 1;
        int maxCount = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
                count++;
            else
                count = 1;
            maxCount = max(count, maxCount);
        }
        cout << n - maxCount << endl;
    }
    return 0;
}