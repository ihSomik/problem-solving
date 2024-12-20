// Collecting Numbers
// https://www.cses.fi/problemset/task/2216

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();

  int n;
  cin >> n;
  vector<int> a(n + 1);

  for (int i = 1; i <= n; i++) cin >> a[i];

  vector<int> pos(n + 1);

  for (int i = 1; i <= n; i++) pos[a[i]] = i;

  int rounds = 1;
  for (int i = 2; i <= n; i++)
    if (pos[i] < pos[i - 1]) rounds++;

  cout << rounds << endl;
}
