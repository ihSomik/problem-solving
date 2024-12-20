#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int q;
  cin >> q;
  unordered_set<int> s;
  while (q--) {
    int y, x;
    cin >> y >> x;
    if (y == 1)
      s.insert(x);
    else if (y == 2)
      s.erase(x);
    else if (s.count(x))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}