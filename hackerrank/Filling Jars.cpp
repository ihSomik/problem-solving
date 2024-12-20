#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    ll candySum(0);

    while (m--) {
        ll a, b, k;
        cin >> a >> b >> k;
        candySum += (b - a + 1) * k;
    }
    cout << candySum / n << endl;
}