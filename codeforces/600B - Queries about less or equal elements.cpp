#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  while (m--) {
    int b;
    cin >> b;
    cout << upper_bound(a.begin(), a.end(), b) - a.begin() << " ";
  }
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}