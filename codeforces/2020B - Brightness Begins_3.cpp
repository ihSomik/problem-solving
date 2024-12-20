#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll k, n, l = 1, h = 2e18;
    cin >> k;

    /*
    after the operations the pattern will be like, 011011110111111011111111 (every number has even number of divisors except perfect square number)
    the 1,2,4,9,16,... -th digits are 0 in the pattern
    so, within n digits there are sqrt(n) zeros
    so, k = n - ⌊ √n ⌋
    or, the direct formula n = ⌊ k + √k + 0.5 ⌋
    */

    while (l <= h) {
        ll mid = l + (h - l) / 2;
        ll on = mid - (int)(sqrtl(mid));

        if (on < k)
            l = mid + 1;
        else
            h = mid - 1, n = mid;
    }
    cout << n << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}