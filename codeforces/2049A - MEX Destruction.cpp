#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int countZero = 0, countNonZero = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0)
      countZero++;
    else
      countNonZero++;
  }
  if (countZero == n) {
    cout << 0 << endl;
    return;
  }
  if (countNonZero == n) {
    cout << 1 << endl;
    return;
  }

  int count = 0;
  bool inSegment = false;

  for (int num : a) {
    if (num > 0) {
      if (!inSegment) {
        count++;
        inSegment = true;
      }
    } else
      inSegment = false;
  }

  if (count > 2) count = 2;
  cout << count << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}