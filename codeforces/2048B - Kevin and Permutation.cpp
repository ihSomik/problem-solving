#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;

  int count = ceil((double)n / k);
  int j = 1, s = 1, i = count + 1;

  while (i <= n) {
    if (j % k == 0) {
      cout << s << " ";
      s++;
    } else {
      cout << i << " ";
      i++;
    }
    j++;
  }

  while (s <= count) {
    cout << s << " ";
    s++;
  }

  cout << endl;
}

int main() {
  fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}