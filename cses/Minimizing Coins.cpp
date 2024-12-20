// Minimizing Coins
// https://www.cses.fi/problemset/task/1634
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> dp(x + 1, -1);
    dp[0] = 0;

    int coins[n];
    for (int i = 0; i < n; i++) cin >> coins[i];

    for (int i = 1; i <= x; i++) {
        for (auto c : coins) {
            if (c > i || dp[i - c] == -1) continue;

            int req_coin = 1 + dp[i - c];
            if (dp[i] == -1 || req_coin < dp[i]) dp[i] = req_coin;
        }
    }

    cout << dp[x] << endl;
}

int main() {
    // fastread();
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
