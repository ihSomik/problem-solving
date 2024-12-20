#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

bool checkMedEligibility(vector<int>& arr, int k, ll m) {
  ll cost = 0;
  int n = arr.size();
  for (int i = n / 2; i < n; i++) cost += (m - arr[i]) <= 0 ? 0 : m - arr[i];

  return cost <= k;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr.begin(), arr.end());

  ll l = 0, r = 2e9 + 1;
  ll ans;
  while (l <= r) {
    ll m = l + (r - l) / 2;
    if (checkMedEligibility(arr, k, m)) {
      l = m + 1;
      ans = m;
    } else
      r = m - 1;
  }
  cout << ans << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}