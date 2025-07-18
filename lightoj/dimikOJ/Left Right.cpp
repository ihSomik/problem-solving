
// https://dimikoj.com/problems/50/left-right
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  string s;
  cin >> s;

  int len = s.length();
  for (int i = 0; i < len; i++) {
    if (s[i] == 'L')
      cout << s[i - 1];
    else if (s[i] == 'R')
      cout << s[i + 1];
    else
      cout << s[i];
  }
  cout << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}
