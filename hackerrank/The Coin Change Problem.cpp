#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int n, m;
  cin >> n >> m;
  int coins[m];
  for (int i = 0; i < m; i++) cin >> coins[i];

  ll dp[n + 1];
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;

  // dp[j] = number of ways to produce j cents
  for (int c : coins)
    for (int j = c; j <= n; j++) dp[j] += dp[j - c];

  cout << dp[n] << endl;

  return 0;
}
