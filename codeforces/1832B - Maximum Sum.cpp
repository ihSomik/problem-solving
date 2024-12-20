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
        ll sum(0);
        ll maxSum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a, a + n);

        int beg(0), end = n - 1;
        for (int i = 0; i < k; i++)
        {
            sum -= a[beg] + a[beg + 1];
            beg += 2;
        }
        maxSum = max(sum, maxSum);
        beg -= 2;
        for (int i = 0; i < k; i++)
        {
            sum = sum + a[beg] + a[beg + 1] - a[end];
            maxSum = max(sum, maxSum);
            beg -= 2;
            end--;
        }

        cout << maxSum << endl;
    }
    /*
        test case 5
        10 11 12 13 15 22
        remove 2 maximum values
        so the maximum possible sum = 46
    */

    return 0;
}