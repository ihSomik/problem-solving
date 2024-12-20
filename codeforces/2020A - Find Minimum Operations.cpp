#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n < k or k == 1) {
        cout << n << endl;
        return;
    }

    int count(0);

    while (n && n >= k) {
        ll t = 1;
        while (t * k <= n) t *= k;
        n -= t;

        count++;
    }

    cout << count + n << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}
