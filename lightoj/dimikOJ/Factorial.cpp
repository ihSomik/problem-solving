// https://dimikoj.com/problems/11/factorial
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int n;
  cin >> n;

  ll fact = 1;
  for (int i = 2; i <= n; i++) fact *= i;

  cout << fact << endl;
}

int main() {
  fastread();

  int t = 1;
  cin >> t;
  while (t--) solve();
}