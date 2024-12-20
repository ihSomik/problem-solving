#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 2e5 + 1;
string s, ss;
bool removed[N];
int a[N];
int n, m;

bool checkSubSeq(int mid) {
  memset(removed, 0, sizeof(removed));

  for (int i = 1; i <= mid; i++) removed[a[i] - 1] = 1;

  for (int i = 0, j = 0; i < n; i++) {
    if (removed[i]) continue;
    if (s[i] == ss[j]) {
      j++;
      if (j == m) return true;
    }
  }
  return false;
}

void solve() {
  cin >> s >> ss;
  n = s.length();
  m = ss.length();

  for (int i = 1; i <= n; i++) cin >> a[i];

  int l = 0, r = n;
  int ans;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (checkSubSeq(mid)) {
      ans = mid;
      l = mid + 1;
    } else
      r = mid - 1;
  }
  cout << ans << endl;
}

int main() {
  fastread();
  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}