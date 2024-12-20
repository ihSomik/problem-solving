#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> c(n);
  map<int, int> count;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    count[c[i]]++;
  }

  int single_item(0), multiple_item(0);
  for (auto m : count) {
    if (m.second == 1)
      single_item++;
    else
      multiple_item++;
  }
  int score = ((single_item + 1) / 2) * 2 + multiple_item;
  cout << score << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}