#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ways;

        if (n & 1)
            ways = n / 2;
        else
            ways = (n / 2) - 1;

        cout << ways << endl;
    }
    return 0;
}