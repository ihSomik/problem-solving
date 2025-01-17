#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> weights(n);
  int totalWeight = 0;
  for (int i = 0; i < n; i++) {
    cin >> weights[i];
    totalWeight += weights[i];
  }

  // dp[i] = true if sum i can be achieved
  vector<bool> dp(totalWeight / 2 + 1, false);
  dp[0] = true;

  for (int i = 0; i < n; i++)
    for (int j = totalWeight / 2; j >= weights[i]; j--)
      dp[j] = dp[j] || dp[j - weights[i]];
  // dp[j] is true if sum j can be achieved taking the first i stones

  int sum1 = 0;
  for (int i = totalWeight / 2; i >= 0; i--) {
    if (dp[i]) {
      sum1 = i;  // sum1 is the largest sum that can be achieved
      break;
    }
  }

  int sum2 = totalWeight - sum1;
  cout << abs(sum2 - sum1) << endl;

  return 0;
}
