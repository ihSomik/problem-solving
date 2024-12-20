// Large Division
// https://lightoj.com/problem/large-division
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        string a;
        long long b, num = 0;
        cin >> a >> b;
        int len = a.length();

        int i;
        (a[0] == '-') ? i = 1 : i = 0;

        for (; i < len; i++)
        {
            num = num * 10 + (a[i] - '0');
            num %= b;
        }
        // (a + b) mod c = ((a mod c) + (b mod c)) mod  c

        if (num)
            cout
                << "Case " << j
                << ": "
                << "not divisible" << endl;
        else
            cout << "Case " << j
                 << ": "
                 << "divisible" << endl;
    }
}