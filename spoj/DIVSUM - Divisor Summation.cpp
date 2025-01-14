#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int sq = sqrt(n);

  if (n == 1) {
    cout << 0 << endl;
    return;
  }

  ll sum = 1;

  for (int i = 2; i <= sq; i++) {
    if (n % i == 0) {
      sum += i;
      if (i != n / i) sum += n / i;
    }
  }

  cout << sum << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}