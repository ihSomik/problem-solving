#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t1 = 1, t2 = 2, t;
  ll sum = t2;
  while (t <= 4000000) {
    t = t1 + t2;
    if (!(t & 1)) sum += t;
    t1 = t2;
    t2 = t;
  }
  cout << sum << endl;
}
