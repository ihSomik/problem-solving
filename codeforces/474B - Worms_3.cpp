#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<pair<int, int>> v;
  v.push_back({1, a[0]});
  for (int i = 1; i < n; i++)
    v.push_back({v[i - 1].second + 1, v[i - 1].second + a[i]});

  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    int l = 0, r = n - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (m >= v[mid].first && m <= v[mid].second) {
        cout << mid + 1 << endl;
        break;
      }
      if (m > v[mid].second)
        l = mid + 1;
      else
        r = mid - 1;
    }
  }
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}