// https://dimikoj.com/problems/25/lcm
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void solve() {
    ll a, b;
    cin >> a >> b;
    cout << "LCM = " << a * b / gcd(a, b) << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}