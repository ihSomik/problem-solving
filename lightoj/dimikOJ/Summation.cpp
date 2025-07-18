// https://dimikoj.com/problems/6/summation
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
  int n;
  cin >> n;

  int sum = n % 10 + n / 10000;
  cout << "Sum = " << sum << endl;
}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}