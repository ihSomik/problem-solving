// https://dimikoj.com/problems/47/coalition-of-array
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int n, m;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++) cin >> b[i];

  int i = 0, j = 0;

  while (i < n && j < m) {
    if (a[i] <= b[j]) {
      cout << a[i];
      i++;
    } else {
      cout << b[j];
      j++;
    }
    if (i != n || j != m) cout << ' ';
  }

  while (i < n) {
    cout << a[i];
    i++;
    if (i != n) cout << ' ';
  }
  while (j < m) {
    cout << b[j];
    j++;
    if (j != m) cout << ' ';
  }
  cout << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}
