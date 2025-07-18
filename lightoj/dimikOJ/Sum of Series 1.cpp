// https://dimikoj.com/problems/40/sum-of-series-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int x, k;
  cin >> x >> k;

  ll sum = 1, pow = 1;
  for (int i = 1; i <= k; i++) {
    pow *= x;
    sum += pow;
  }

  cout << "Result = " << sum << endl;
}
int main() {
  // fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}
