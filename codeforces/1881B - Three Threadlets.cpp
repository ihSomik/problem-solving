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
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        int op(0);
        if (a[1] % a[0] == 0)
            op += a[1] / a[0] - 1;
        if (a[2] % a[0] == 0)
            op += a[2] / a[0] - 1;

        if (op <= 3 && (a[1] % a[0] == 0) && (a[2] % a[0] == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}