// https://dimikoj.com/problems/10/run-rate-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int r1, r2, b;
  cin >> r1 >> r2 >> b;
  double crr = (r2 * 6.0) / (300 - b);     // current run rate
  double rrr = ((r1 - r2 + 1) * 6.0) / b;  // required run rate
  if (r2 > r1) rrr = 0.0;

  printf("%.2lf %.2lf\n", crr, rrr);
}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}