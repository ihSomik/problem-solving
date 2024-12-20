#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve() {
    /*
    x is unprofitable deposit
    a-x = b-2x
    x = b-a
    profitable deposit = a-x = 2a-b
    */

    int a, b;
    cin >> a >> b;
    if (a >= b)
        cout << a << endl;
    else if (2 * a - b > 0)
        cout << 2 * a - b << endl;
    else
        cout << 0 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) solve();
}