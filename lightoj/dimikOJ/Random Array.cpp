// https://dimikoj.com/problems/28/random-array
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

  bool sorted = true;
  for (int i = 0; i < n - 1; i++)
    if (a[i] > a[i + 1]) {
      sorted = false;
      break;
    }

  if (!sorted) {
    sorted = true;
    for (int i = 0; i < n - 1; i++)
      if (a[i] < a[i + 1]) {
        sorted = false;
        break;
      }
  }

  if (sorted)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int main() {
  // fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}