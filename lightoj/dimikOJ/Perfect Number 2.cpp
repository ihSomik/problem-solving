// https://dimikoj.com/problems/31/perfect-number-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int a[] = {6, 28, 496, 8128, 33550336};
  int n;
  cin >> n;

  for (int i = 0; i < 5; i++)
    if (a[i] <= n) cout << a[i] << endl;

  cout << endl;
}

int main() {
  // fastread();
  int t;
  cin >> t;
  while (t--) solve();
}
