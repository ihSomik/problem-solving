#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll k;
    cin >> k;

    /*
    after the operations the pattern will be like, 011011110111111011111111  (every number has even number of divisors except perfect square number)
    to be noticed,
    011 01111 0111111 011111111
     2    4      6        8

    sum of first x even numbers = k
    so, x*x + x = k

    011 01111 0111111 011111111
     3    5      7        9

    y = x+1
    sum of first y odd numbers (excluding '1') = n
    so, y*y - 1 = n
    */

    ll n = ceil((sqrtl(4 * k + 1) - 1) / 2.0) + k;

    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
