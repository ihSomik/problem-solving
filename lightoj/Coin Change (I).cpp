#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int mod = 100000007;

int main() {
  fastread();

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n, K;
    cin >> n >> K;

    int coins[n], limits[n];
    for (int i = 0; i < n; i++) cin >> coins[i];
    for (int i = 0; i < n; i++) cin >> limits[i];

    ll dp[K + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 0; i < n; i++)
      for (int j = K; j >= 0; j--)  // process from back to avoid overcounting
        for (int k = 1; k <= limits[i] && j - k * coins[i] >= 0; k++)
          dp[j] = (dp[j] + dp[j - k * coins[i]]) % mod;

    cout << "Case " << tc << ": " << dp[K] << endl;
  }

  return 0;
}
