#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, m;
  cin >> n >> m;
  unordered_map<string, string> nameOf;
  while (n--) {
    string name, ip;
    cin >> name >> ip;
    nameOf[ip] = name;
  }
  while (m--) {
    string s, ip;
    cin >> s >> ip;
    ip.pop_back();
    cout << s << ' ' << ip << "; #" << nameOf[ip] << endl;
  }
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}