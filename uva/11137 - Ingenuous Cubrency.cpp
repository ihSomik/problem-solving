#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  vector<int> coins(21);
  for (int i = 1; i <= 21; i++) coins[i - 1] = i * i * i;
  int N = 10000;
  vector<ll> dp(N + 1, 0);
  dp[0] = 1;

  // dp[j] = number of ways to produce j cents
  for (int c : coins)
    for (int j = c; j <= N; j++) dp[j] += dp[j - c];

  int n;
  while (cin >> n) cout << dp[n] << endl;

  return 0;
}
