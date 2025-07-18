// https://dimikoj.com/problems/48/missing-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  ll n;
  cin >> n;

  ll sum = 0;
  for (int i = 1; i < n; i++) {
    int temp;
    cin >> temp;
    sum += temp;
  }
  ll ans = (n * (n + 1) / 2) - sum;
  cout << ans << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}