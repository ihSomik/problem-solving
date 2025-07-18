// https://dimikoj.com/problems/12/factorial-100
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int n;
  cin >> n;

  int count = 0;
  int x = 5;
  while (n > x) {
    count += n / x;  // counting number of 5 in n!
    x *= 5;
  }

  cout << count << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}