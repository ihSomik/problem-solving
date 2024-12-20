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
        int n, x;
        cin >> n;
        int maxB = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b > maxB && a <= 10)
            {
                x = i;
                maxB = b;
            }
        }
        cout << x << endl;
    }
    return 0;
}