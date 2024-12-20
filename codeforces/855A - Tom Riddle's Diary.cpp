#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  unordered_map<string, bool> present;
  while (n--) {
    string s;
    cin >> s;
    if (present[s])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    present[s] = true;
  }
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}