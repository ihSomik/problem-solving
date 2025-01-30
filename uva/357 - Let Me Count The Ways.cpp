#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int N = 30000;
  vector<int> coins = {1, 5, 10, 25, 50};
  vector<ll> dp(N + 1, 0);
  dp[0] = 1;

  // dp[j] = number of ways to produce j cents
  for (int c : coins)
    for (int j = c; j <= N; j++) dp[j] += dp[j - c];

  int n;
  while (cin >> n) {
    if (dp[n] == 1)
      cout << "There is only 1 way to produce " << n << " cents change."
           << endl;
    else
      cout << "There are " << dp[n] << " ways to produce " << n
           << " cents change." << endl;
  }

  return 0;
}
