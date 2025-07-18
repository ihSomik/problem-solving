// https://dimikoj.com/problems/26/alien-gupi
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  double x;
  cin >> x;

  int days(0);
  while (x > 1) {
    x /= 2;
    days++;
  }
  cout << days << " days" << endl;
}

int main() {
  // fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}