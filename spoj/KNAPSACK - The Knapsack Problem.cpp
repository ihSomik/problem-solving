#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int n, w;
  cin >> w >> n;

  int wt[n + 1], v[n + 1];
  for (int i = 1; i <= n; i++) cin >> wt[i] >> v[i];

  ll dp[n + 1][w + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= w; j++) {
      dp[i][j] = dp[i - 1][j];  // option 1: skip the item

      if (wt[i] <= j)  // option 2: take the item if possible
        dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + v[i]);
    }
  }

  cout << dp[n][w] << endl;

  return 0;
}
