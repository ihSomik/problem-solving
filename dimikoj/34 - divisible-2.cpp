// https://dimikoj.com/problems/34/divisible-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll lcm = a * b / gcd(a, b);
    for (ll i = lcm; i <= c; i += lcm)
        cout << i << endl;

    cout << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}