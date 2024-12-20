#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int t = 1;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n, r;
    cin >> n >> r;
    map<pair<int, int>, bool> exist;
    bool corrupted = false;
    while (r--) {
      int x, y;
      cin >> x >> y;
      if (exist[{x, y}]) corrupted = true;
      exist[{x, y}] = true;
    }
    if (corrupted)
      cout << "Scenario #" << tc << ": "
           << "impossible" << endl;
    else
      cout << "Scenario #" << tc << ": "
           << "possible" << endl;
  }
}