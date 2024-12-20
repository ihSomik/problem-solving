#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int flag(0);

        if (n & 1)
            flag = 1;
        else
        {
            long long x = n;
            while (x > 2)
            {
                x /= 2; // even number = 2 * odd number
                if (x & 1)
                    if (!(n % x))
                    {
                        flag = 1;
                        break;
                    }
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}