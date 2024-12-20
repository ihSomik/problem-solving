#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

bool comparator(pair<int, int>& p1, pair<int, int>& p2) {
  return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

  sort(v.begin(), v.end(), comparator);

  k--;

  int count(0);
  for (auto u : v)
    if (u == v[k]) count++;

  cout << count << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}