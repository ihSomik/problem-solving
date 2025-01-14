#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool func(ll l, ll r) { return __gcd(l, r) == 1; }

void solve() {
  ll l, r, g;
  cin >> l >> r >> g;
  ll p = l, q = r;
  if (l % g) l = (l / g + 1) * g;
  r = (r / g) * g;
  l /= g;
  r /= g;
  ll G = g;
  g = 1;
  if (l > r) {
    cout << -1 << " " << -1 << endl;
    return;
  }
  ll d = -1;
  ll x = -1, y = -1;
  for (ll i = 0; i <= 30; i++) {
    for (ll j = 0; j <= 30; j++) {
      ll nl = l + i * g, nr = r - j * g;
      if (nl > nr) break;
      ll nd = nr - nl;
      if (func(nl, nr)) {
        if (nd > d) {
          x = nl;
          y = nr;
          d = nd;  // অতি ছৈয়ালের টুয়া উদাম
        }
      }
    }
  }
  if (func(x, y))
    cout << x * G << " " << y * G << endl;
  else
    cout << -1 << " " << -1 << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}