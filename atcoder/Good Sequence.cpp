// https://atcoder.jp/contests/arc087/tasks/arc087_a
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  unordered_map<int, int> count;

  for (int e : v) count[e]++;

  int removed(0);
  for (auto u : count)
    removed += u.second >= u.first ? (u.second - u.first) : u.second;

  cout << removed << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}