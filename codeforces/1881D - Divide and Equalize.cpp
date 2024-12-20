#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> divs;
  for (int i = 0; i < n; i++) {
    cin >> a[i];

    int x = a[i];
    int j = 2;
    while (j * j <= x) {
      while (x % j == 0) {
        divs[j]++;
        x /= j;
      }
      j++;
    }
    if (x > 1) divs[x]++;
  }

  for (auto d : divs) {
    if (d.second % n != 0) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}