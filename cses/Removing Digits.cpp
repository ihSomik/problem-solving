// Removing Digits
// https://www.cses.fi/problemset/task/1637
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, INT_MAX - 1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp) {
            int dig = temp % 10;
            dp[i] = min(dp[i], 1 + dp[i - dig]);
            temp /= 10;
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
