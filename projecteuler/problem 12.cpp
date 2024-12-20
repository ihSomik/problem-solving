#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countDivisors(ll n) {
  int count = 0;
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i)
        count++;
      else
        count += 2;
    }
  }
  return count;
}

int main() {
  int n = 1;
  while (true) {
    ll number = (ll)n * (n + 1) / 2;

    if (countDivisors(number) > 500) {
      cout << number << endl;
      return 0;
    }

    n++;
  }
}
