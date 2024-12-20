#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const ll n = 1e12;
unordered_set<ll> cubes;
void calcCubes() {
  for (ll i = 1; i * i * i <= n; i++) cubes.insert(i * i * i);
}

void solve() {
  ll x;
  cin >> x;

  for (ll a = 1; a * a * a < x; a++) {
    if (cubes.count(x - a * a * a)) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  fastread();
  calcCubes();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}