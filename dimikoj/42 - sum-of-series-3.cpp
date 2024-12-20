// https://dimikoj.com/problems/42/sum-of-series-3
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;

    for (int k = n; k > 1; k--) cout << "2^" << k << " + ";
    if (n > 0) cout << "2 + ";
    cout << 1 << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
