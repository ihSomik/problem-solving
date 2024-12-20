#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;

  ll l = 1, r = 1e18;
  ll ans;
  while (l <= r) {
    ll m = l + (r - l) / 2;
    if (m - (m / n) >= k) {
      ans = m;
      r = m - 1;
    }

    else
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