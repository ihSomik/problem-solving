#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to count divisors based on prime factorization
int countDivisor(ll n) {
  map<ll, int> factors;

  while (n % 2 == 0) {
    factors[2]++;
    n /= 2;
  }

  for (ll i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      factors[i]++;
      n /= i;
    }
  }

  if (n > 2) factors[n]++;

  int divisors = 1;
  for (auto& f : factors) divisors *= (f.second + 1);
  return divisors;
}

int main() {
  int n = 1;
  while (true) {
    ll number = (ll)n * (n + 1) / 2;

    if (countDivisor(number) > 500) {
      cout << number << endl;
      return 0;
    }

    n++;
  }
}
