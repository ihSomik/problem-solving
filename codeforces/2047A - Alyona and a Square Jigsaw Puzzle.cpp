#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) cin >> a[i];

  int sum(0), count(0);
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (sqrt(sum) == (int)sqrt(sum) && ((int)sqrt(sum) & 1)) count++;
  }
  cout << count << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}