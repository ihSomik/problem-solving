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

        ll sum[n + 1] = {0};
        for (int i = 1; i <= n; i++)
            sum[i] = sum[i - 1] + a[i - 1];

        ll maxSum = INT_MIN;
        for (int i = 0; i <= k; i++)
            maxSum = max(maxSum, sum[n - i] - sum[2 * (k - i)]);

        cout << maxSum << endl;
    }
    /*
        test case 5
        index       --> 0  1  2  3  4  5  
        sorted a[n] --> 10 11 12 13 15 22
        sum[n]      --> 0  10 21 33 46 61 83
        remove 2 maximum values
        so the maximum possible sum = 46
    */

    return 0;
}