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

  multiset<int> h;
  vector<int> t(m);

  for (int i = 0; i < n; i++) {
    int ticket_price;
    cin >> ticket_price;
    h.insert(ticket_price);
  }

  for (int i = 0; i < m; i++) cin >> t[i];

  for (int i = 0; i < m; i++) {
    auto it = h.upper_bound(t[i]);

    if (it != h.begin()) {
      it--;
      cout << *it << endl;
      h.erase(it);  // it takes O(logn)
    } else
      cout << "-1" << endl;
  }
}
