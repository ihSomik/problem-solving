#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int lower_bound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

int upper_bound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, q;
        cin >> n >> q;
        int p[n];
        for (int i = 0; i < n; i++)
            cin >> p[i];

        cout << "Case " << i << ":" << endl;
        while (q--)
        {
            int a, b;
            cin >> a >> b;

            int l = lower_bound(p, n, a);
            int u = upper_bound(p, n, b);

            cout << u - l << endl;
        }
    }

    return 0;
}