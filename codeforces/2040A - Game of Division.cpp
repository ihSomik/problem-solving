#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  for (int i = 0; i < n; i++) {
    bool divisible = false;
    for (int j = 0; j < n; j++) {
      if (j == i) continue;
      if (abs(v[i] - v[j]) % k == 0) divisible = true;
    }
    if (!divisible) {
      cout << "YES" << endl << i + 1 << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}