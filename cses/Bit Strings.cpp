// Bit Strings
// https://cses.fi/problemset/submit/1617/
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    int n, result = 1;
    cin >> n;
    while (n--)
    {
        result *= 2;
        result %= MOD;
    }
    cout << result << endl;
    /*
    possible bit strings = 2^n
    output --> (2^n % 1000000007)
    (a*b) mod c = ((a mod c) * (b mod c)) mod c
    */
}