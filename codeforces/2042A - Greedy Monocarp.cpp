#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  sort(v.rbegin(), v.rend());

  ll sum(0);
  for (int c : v) {
    if (sum + c > k) {
      cout << k - sum << endl;
      return;
    }
    sum += c;
  }
  cout << k - sum << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}