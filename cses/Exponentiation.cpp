// Exponentiation
// https://cses.fi/problemset/task/1095
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    ll a, b;
    int mod = 1e9 + 7;
    ll res = 1;
    cin >> a >> b;

    while (b) {
        if (b & 1) {
            res = (res % mod * a % mod) % mod;
            b--;
        } else {
            a = (a % mod * a % mod) % mod;
            b /= 2;
        }
    }

    cout << res << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}
