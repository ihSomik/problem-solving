#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  set<int> s;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }

  if (s.size() == 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}