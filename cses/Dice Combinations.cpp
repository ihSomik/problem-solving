// Dice Combinations
// https://www.cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    int dp[n + 1] = {0};
    dp[0] = 1;
    int dices = 6;
    ll mod = 1000000007;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= dices; j++) {
            if (j > i) break;
            dp[i] = ((dp[i] % mod) + (dp[i - j] % mod)) % mod;
        }
    }

    cout << dp[n] << endl;
}

int main() {
    // fastread();
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
