// https://dimikoj.com/problems/3/descending-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
  cout << "1000" << ' ';
  for (int i = 999; i > 1; i--) {
    if (i % 5 == 0) cout << endl;
    cout << i << ' ';
  }
  cout << '1';
}

int main() {
  fastread();

  int t = 1;
  // cin >> t;
  while (t--) solve();
}