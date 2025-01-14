#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 100000000;
bitset<N + 1> isPrime;
// vector<bool> isPrime(N + 1, 1);
vector<int> primes;

void sieveOfEratosthenes() {
  isPrime.set();
  isPrime[0] = isPrime[1] = 0;

  for (int i = 4; i <= N; i += 2) isPrime[i] = 0;

  for (int i = 3; i * i <= N; i += 2)
    if (isPrime[i])
      for (int j = i * i; j <= N; j += i * 2) isPrime[j] = 0;

  primes.push_back(2);
  for (int i = 3; i <= N; i += 2)
    if (isPrime[i]) primes.push_back(i);
}

void solve() {
  ll n;
  cin >> n;

  ll tmp = n, sum = 1;

  for (int p : primes) {
    if ((ll)p * p > n) break;

    if (n % p == 0) {
      ll term = 1, power = 1;
      while (n % p == 0) {
        n /= p;
        power *= p;     // p^1, p^2, p^3, ...
        term += power;  // p^0 + p^1 + p^2 + p^3 + ...
      }
      sum *= term;  // (1 + p + p^2 + ...) * (1 + q + q^2 + ...) * ...
    }
  }

  if (n > 1) sum *= (1 + n);  // (r^0 + r^1)
  cout << sum - tmp << endl;
}

int main() {
  fastread();
  sieveOfEratosthenes();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}