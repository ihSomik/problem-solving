// https://dimikoj.com/problems/30/perfect-number-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef unsigned long long int ull;

void solve() {
  /*
  ull n = 10000000000000000000;
  for (ull x = 2; x <= n; x++) {
      ull sq = sqrt(x);
      ull sum = 1;
      for (ull i = 2; i <= sq; i++) {
          if (x % i == 0) {
              sum += i + (x / i);
              if (i == x / i) sum -= i;
          }
      }
      if (sum == x) cout << x << endl;
  }

  one eternity later...
  a[8] = {"6", "28", "496", "8128", "33550336", "8589869056", "137438691328",
  "2305843008139952128"};
  */

  string a[8] = {
      "6",        "28",         "496",          "8128",
      "33550336", "8589869056", "137438691328", "2305843008139952128"};
  string n;
  cin >> n;

  for (int i = 0; i < 8; i++)
    if (a[i] == n) {
      cout << "YES, " << n << " is a perfect number!" << endl;
      return;
    }

  cout << "NO, " << n << " is not a perfect number!" << endl;
}
int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}