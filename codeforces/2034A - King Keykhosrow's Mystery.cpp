#include <bits/stdc++.h>
using namespace std;
#define fastread()(ios_base::sync_with_stdio(false), cin.tie(NULL))
typedef long long int ll;
typedef unsigned long long ull;
#define endl '\n'

void solve() {
  int a, b;
  cin >> a >> b;
  cout << (a * b) / __gcd(a, b) << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
}