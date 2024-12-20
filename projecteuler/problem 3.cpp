#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check_prime(ll n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (!(n & 1) || !(n % 3)) return false;
  for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2))) return false;
  return true;
}
int main() {
  ll n = 600851475143;
  ll i(2);
  while (1) {
    if (n % i == 0 && check_prime(n / i)) {
      cout << n / i;
      break;
    }
    i++;
  }
}
