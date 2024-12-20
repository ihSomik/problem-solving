#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end());

  int size = unique(v.begin(), v.end()) - v.begin();
  if (size == x)
    cout << "Good" << endl;
  else if (size > x)
    cout << "Average" << endl;
  else
    cout << "Bad" << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}