// https://dimikoj.com/problems/43/calculation
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int p, q, c;
    cin >> p >> q >> c;

    int res = 1;
    while (q--)
        res = ((res % c) * (p % c)) % c;

    cout << "Result = " << res << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
