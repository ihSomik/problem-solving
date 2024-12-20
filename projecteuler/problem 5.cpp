#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int main() {
  ll result;
  for (int i = 1; i <= 20; i++) result = lcm(result, i);
  cout << result << endl;
}
