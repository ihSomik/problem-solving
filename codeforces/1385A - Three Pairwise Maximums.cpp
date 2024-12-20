#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];

        sort(x, x + 3);

        if (x[1] != x[2])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << x[2] << " " << x[0] << " " << x[0] << endl;
        }
        /*
            if a <= b <= c
            x = max(a,b) = b
            y = max(a,c) = c
            z = max(b,c) = c
            so a, b, c exists if x, y, z equals b, c, c
            so, a = b, b = b, c = c (condition of x, y, z is satisfied)
        */
    }

    return 0;
}