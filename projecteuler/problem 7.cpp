#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (!(n & 1) || !(n % 3)) return false;
  for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2))) return false;
  return true;
}

int main() {
  int n = 1;
  int i = 0;
  while (i != 10001) {
    n++;
    if (check_prime(n)) i++;
  }
  cout << n << endl;
}
