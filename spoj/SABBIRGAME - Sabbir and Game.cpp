#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

bool check(vector<int>& arr, ll val) {
  ll score = val;
  for (int a : arr) {
    score += a;
    if (score <= 0) return false;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  ll l = 0, r = 1e10 + 1;
  ll ans;
  while (l <= r) {
    ll m = l + (r - l) / 2;

    if (check(arr, m)) {
      ans = m;
      r = m - 1;
    } else
      l = m + 1;
  }
  cout << ans << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}