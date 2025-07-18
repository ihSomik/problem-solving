// https://dimikoj.com/problems/33/divisible-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  ll a, b, c, t;
  cin >> a >> b >> c;

  t = c;
  while (t < a) t += c;

  for (ll i = t; i <= b; i += c) cout << i << endl;
  cout << endl;
}
int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}