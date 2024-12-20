#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

int sign(int n)
{
    if (n < 0)
        return -1;
    else
        return 1;
}

int main()
{
    fastread();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll sum(0);
        for (int i = 0; i < n; i++)
        {
            int maxEle = a[i];
            for (int j = i + 1; j < n && (sign(a[i]) == sign(a[j])); j++)
            {
                maxEle = max(maxEle, a[j]);
                i = j;
            }
            sum += maxEle;
        }
        cout << sum << endl;
    }
    return 0;
}