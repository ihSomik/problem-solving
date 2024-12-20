#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve() {
    ll k;
    cin >> k;

    /*
    after the operations the pattern will be like, 011011110111111011111111 (every number has even number of divisors except perfect square number)
    the 1,2,4,9,16,... -th digits are 0 in the pattern
    so, within n digits there are sqrt(n) zeros
    so, k = n - ⌊ √n ⌋
    or, the direct formula n = ⌊ k + √k + 0.5 ⌋
    */

    ll n = k + floor(0.5 + sqrtl(k));

    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}