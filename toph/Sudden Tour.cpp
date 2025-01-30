#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n, w;
    cin >> n >> w;

    vector<int> wt(n + 1), v(n + 1);
    for (int i = 1; i <= n; i++) cin >> wt[i] >> v[i];

    vector<ll> dp(w + 1, 0);

    for (int i = 1; i <= n; i++)
      for (int j = w; j >= wt[i]; j--) dp[j] = max(dp[j], dp[j - wt[i]] + v[i]);

    cout << "Case " << tc << ": " << dp[w] << endl;
  }

  return 0;
}
