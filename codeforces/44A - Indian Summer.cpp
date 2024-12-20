#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<pair<string, string>> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

  sort(v.begin(), v.end());

  int size = unique(v.begin(), v.end()) - v.begin();
  cout << size << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}