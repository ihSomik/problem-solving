// https://dimikoj.com/problems/1/even-odd-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  if (n & 1)
    cout << "odd" << endl;
  else
    cout << "even" << endl;
}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}