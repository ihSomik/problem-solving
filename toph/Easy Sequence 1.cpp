#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int F[100000];
unordered_map<int, int> m;

int main() {
  fastread();

  F[1] = 1;
  F[2] = 2;
  for (int i = 1; i < 1000; i++) {
    F[2 * i] = F[i] * F[i] + 1;
    F[2 * i + 1] = F[i] * F[i + 1] + 2;
    m[F[i]] = i;
  }

  int t = 1;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int f;
    cin >> f;

    cout << "Case " << tc << ": " << m[f] << endl;
  }
}