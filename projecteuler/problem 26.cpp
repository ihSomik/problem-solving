// https://projecteuler.net/problem=26
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int check(int d) {
  int rem = 1 % d;
  vector<int> pos(d, -1);
  int idx = 0;
  while (pos[rem] == -1 && rem != 0) {
    pos[rem] = idx;
    rem = (rem * 10) % d;
    idx++;
  }
  if (rem == 0) return 0;
  return idx - pos[rem];
}

int main() {
  int d = 1000, len = 0, maxLen = 0, res = 0;

  for (int i = 2; i < d; i++) {
    // checking if d has only 2 and 5 as its prime factors
    int m = i;
    while (m % 2 == 0) m /= 2;
    while (m % 5 == 0) m /= 5;
    if (m == 1) continue;
    len = check(i);
    if (len > maxLen) {
      maxLen = len;
      res = i;
    }
  }
  cout << res << endl;
}