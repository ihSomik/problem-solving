// https://dimikoj.com/problems/32/multiple-of-x
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int x, n;
  cin >> x >> n;

  if (x > n) {
    cout << "Invalid!" << endl << endl;
    return;
  }

  for (int i = x; i <= n; i += x) cout << i << endl;
  cout << endl;
}
int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}