#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int N, W;
  cin >> N >> W;

  int w[N], v[N];
  ll dp[W + 1] = {0};
  // dp[i] = maximum value that can be obtained with weight i

  for (int i = 0; i < N; i++) cin >> w[i] >> v[i];

  for (int i = 0; i < N; i++)
    for (int j = W; j >= w[i]; j--) dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

  ll answer = 0;
  for (int w = 0; w <= W; w++) answer = max(answer, dp[w]);

  cout << answer << endl;
  return 0;
}
