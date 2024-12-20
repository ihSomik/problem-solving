// Grid Paths
// https://www.cses.fi/problemset/task/1638
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    char g[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> g[i][j];

    int dp[n][n] = {0};
    dp[0][0] = 1;
    int mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == '*')
                dp[i][j] = 0;
            else if (!i && j)
                dp[i][j] = dp[i][j - 1];
            else if (i && !j)
                dp[i][j] = dp[i - 1][j];
            else if (i > 0 && j > 0 && g[i][j] != '*')
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % mod;
        }
    }

    cout << dp[n - 1][n - 1] << endl;
}

int main() {
    // fastread();
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
