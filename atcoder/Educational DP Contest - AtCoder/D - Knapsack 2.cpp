#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int N;
  ll W;
  cin >> N >> W;

  int w[N], v[N];
  int maxVal = 0;

  for (int i = 0; i < N; i++) {
    cin >> w[i] >> v[i];
    maxVal += v[i];
  }

  ll dp[maxVal + 1];  // dp[i] = minimum weight to get value i
  const ll INF = 1e18;

  for (int i = 1; i <= maxVal; i++) dp[i] = INF;
  dp[0] = 0;

  for (int i = 0; i < N; i++)
    for (int j = maxVal; j >= v[i]; j--)
      if (dp[j - v[i]] != INF) dp[j] = min(dp[j], dp[j - v[i]] + w[i]);

  int answer = 0;  // maximum value that can be obtained with weight <= W
  for (int v = 0; v <= maxVal; v++)
    if (dp[v] <= W) answer = v;

  cout << answer << endl;
  return 0;
}
