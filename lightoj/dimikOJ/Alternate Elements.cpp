// https://dimikoj.com/problems/24/alternate-elements
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i += 2) {
    cout << a[i];
    if (i < n - 2) cout << ' ';
  }

  cout << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}