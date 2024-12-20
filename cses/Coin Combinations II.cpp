// Coin Combinations II
// https://www.cses.fi/problemset/task/1636
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n, x;
    cin >> n >> x;
    int coins[n];
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x + 1);
    dp[0] = 1;
    int mod = 1000000007;

    for (auto c : coins)
        for (int i = c; i <= x; i++)
            dp[i] = (dp[i] + dp[i - c]) % mod;

    cout << dp[x] << endl;
}

int main() {
    // fastread();
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
