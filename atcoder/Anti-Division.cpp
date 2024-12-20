#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll count_numbers(ll a, ll b, ll c, ll d) {
    ll x = b / c - (a - 1) / c;

    ll y = b / d - (a - 1) / d;

    ll k = (c * d) / __gcd(c, d);

    ll z = b / k - (a - 1) / k;

    return b - a + 1 - x - y + z;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << count_numbers(a, b, c, d);

    return 0;
}
