// Sum of Three Values
// https://www.cses.fi/problemset/task/1641
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n, x;
  cin >> n >> x;
  vector<int> a(n);

  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = 0; i < n; ++i) {
    unordered_map<int, int> seen;
    int target = x - a[i];

    for (int j = i + 1; j < n; ++j) {
      int target2 = target - a[j];
      if (seen.count(target2)) {
        cout << i + 1 << " " << seen[target2] + 1 << " " << j + 1 << endl;
        return 0;
      }
      seen[a[j]] = j;
    }
  }

  cout << "IMPOSSIBLE" << endl;
}