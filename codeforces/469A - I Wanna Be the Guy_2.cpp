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
  for (int i = 1; i <= n; i++) s.insert(i);

  int p;
  cin >> p;
  while (p--) {
    int t;
    cin >> t;
    s.erase(t);
  }

  int q;
  cin >> q;
  while (q--) {
    int t;
    cin >> t;
    s.erase(t);
  }

  if (s.empty())
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
}