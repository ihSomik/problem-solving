// https://projecteuler.net/problem=15
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

long long nCr(int n, int r) {
  if (r > n - r) r = n - r;  // nCr equals nC(n-r)

  long long res = 1;

  for (int i = 0; i < r; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }

  return res;
}

int main() {
  int n = 20;

  // to move from top-left to bottom-right in a 20x20 grid,
  // we need exactly 20 moves right (R) and 20 moves down (D)
  // total moves = 20 + 20 = 40
  // number of paths = 40C20
  long long paths = nCr(2 * n, n);

  cout << paths << endl;
}
