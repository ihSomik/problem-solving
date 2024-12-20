#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  if (next_permutation(s.begin(), s.end()))
    cout << s << endl;
  else
    cout << "no answer" << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}