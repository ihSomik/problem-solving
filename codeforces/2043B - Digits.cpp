#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, d;
  cin >> n >> d;

  cout << 1 << " ";

  if (n >= 3 || d % 3 == 0) cout << 3 << " ";
  if (d % 5 == 0) cout << 5 << " ";
  if (n >= 3 || d % 7 == 0) cout << 7 << " ";
  if (n >= 6 || d % 9 == 0 || (d % 3 == 0 && n >= 3)) cout << 9;

  cout << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}