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
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int h[n];
        int peopleNum(0);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            int heightDiff = abs(h[i] - H);
            if (heightDiff % k == 0 && heightDiff <= ((m - 1) * k) && heightDiff)
                peopleNum++;
        }
        cout << peopleNum << endl;
    }

    return 0;
}