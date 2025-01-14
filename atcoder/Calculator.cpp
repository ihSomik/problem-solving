#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] != '0')
      count++;
    else if (s[i] == '0' && s[i + 1] == '0' && i != n - 1) {
      count++;
      i++;
    } else
      count++;
  }

  cout << count << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}