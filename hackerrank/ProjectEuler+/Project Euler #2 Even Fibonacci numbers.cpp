#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const ll maxN = 4e16;
vector<ll> evenFib;

void precomputeEvenFib() {
  ll a = 1, b = 2;
  while (b <= maxN) {
    if (!(b & 1)) evenFib.push_back(b);

    ll c = a + b;
    a = b;
    b = c;
  }
}

int main() {
  fastread();
  precomputeEvenFib();

  int t;
  cin >> t;
  while (t--) {
    ll N;
    cin >> N;
    ll sum = 0;
    for (auto x : evenFib) {
      if (x > N) break;
      sum += x;
    }
    cout << sum << endl;
  }
  return 0;
}
