// tle
// Concert Tickets
// https://www.cses.fi/problemset/task/1091/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  vector<int> t(m);

  for (int i = 0; i < n; i++) cin >> h[i];
  for (int i = 0; i < m; i++) cin >> t[i];

  sort(h.begin(), h.end());

  for (int i = 0; i < m; i++) {
    auto it = upper_bound(h.begin(), h.end(), t[i]);
    if (it != h.begin()) {
      it--;
      cout << *it << endl;
      h.erase(it);  // it takes O(n)
    } else
      cout << "-1" << endl;
  }
}