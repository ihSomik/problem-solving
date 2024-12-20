#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) cin >> x[i];

  sort(x.begin(), x.end());

  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    cout << upper_bound(x.begin(), x.end(), m) - x.begin() << endl;
  }
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}