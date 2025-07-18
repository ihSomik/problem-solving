#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  if (n < 1000)
    ;  // do nothing
  else if (n < 10000)
    n = n / 10 * 10;
  else if (n < 100000)
    n = n / 100 * 100;
  else if (n < 1000000)
    n = n / 1000 * 1000;
  else if (n < 10000000)
    n = n / 10000 * 10000;
  else if (n < 100000000)
    n = n / 100000 * 100000;
  else if (n < 1000000000)
    n = n / 1000000 * 1000000;
  else
    n = n / 10000000 * 10000000;

  cout << n << endl;
  return 0;
}