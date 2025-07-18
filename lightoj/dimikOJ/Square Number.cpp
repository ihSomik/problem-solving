// https://dimikoj.com/problems/9/square-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
  long long n;
  cin >> n;
  double sq = sqrt(n);

  if (ceil(sq) == floor(sq))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}