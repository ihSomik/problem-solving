#include <bits/stdc++.h>
using namespace std;
#define fastread()(ios_base::sync_with_stdio(false), cin.tie(NULL))
typedef long long int ll;
typedef unsigned long long ull;
#define endl '\n'

ll a, b, c;

ll func(int x) {
  return a * x * x + b * x + c;
}

void solve() {

  cin >> a >> b >> c;
  ll k;
  cin >> k;
  int x;

  int l = 0, r = 2e5;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (func(mid) >= k) {
      x = mid;
      r = mid - 1;
    } else l = mid + 1;
  }
  cout << x << endl;

}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}