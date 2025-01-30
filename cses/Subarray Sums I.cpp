// Subarray Sums I
// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;
  int a[n + 1];
  for (int i = 1; i <= n; i++) cin >> a[i];

  ll prefix_sum[n + 1];
  prefix_sum[0] = 0;
  for (int i = 1; i <= n; i++) prefix_sum[i] = prefix_sum[i - 1] + a[i];

  unordered_map<ll, bool> exist;
  exist[0] = true;
  ll solve(0);
  for (int r = 1; r <= n; r++) {
    if (exist[prefix_sum[r] - x])
      solve++;  // checking the condition, prefix_sum[r] - prefix_sum[l-1] == x
    exist[prefix_sum[r]] = true;
  }

  cout << solve << endl;
}