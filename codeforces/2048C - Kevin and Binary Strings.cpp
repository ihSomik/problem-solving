#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  cout << 1 << " " << n << " ";

  int pos = -1;  // position of first 0

  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      pos = i;
      break;
    }
  }

  if (pos == -1) {
    cout << 1 << " " << 1 << endl;
    return;
  }

  int subLen = n - pos;
  string bestSub = "";
  int bestPos = 0;

  for (int i = 0; i < pos; i++) {
    string sub;
    for (int j = 0; j < subLen; j++) {
      sub += s[i + j] == s[pos + j] ? '0' : '1';
    }
    if (sub > bestSub) {
      bestSub = sub;
      bestPos = i;
    }
  }
  cout << bestPos + 1 << " " << bestPos + subLen << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}