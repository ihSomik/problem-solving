#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n;
  cin >> n;

  unordered_set<int> s;

  int p;
  cin >> p;
  while (p--) {
    int t;
    cin >> t;
    s.insert(t);
  }

  int q;
  cin >> q;
  while (q--) {
    int t;
    cin >> t;
    s.insert(t);
  }

  if (s.size() == n)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
}