#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    if (n & 1)
        cout << -1 << endl;
    else
        for (int i = 1; i < n; i += 2) cout << i + 1 << ' ' << i << ' ';

    cout << endl;
}

int main() {
    fastread();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}