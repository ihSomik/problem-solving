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
  int n;
  cin >> n;

  int phi = n;

  for (int p : primes) {
    if ((ll)p * p > n) break;
    if (n % p == 0) {
      while (n % p == 0) n /= p;
      phi *= (1 - 1.0 / p);
    }
  }

  cout << (n > 1 ? phi * (1 - 1.0 / n) : phi) << endl;
}

int main() {
  fastread();
  sieveOfEratosthenes();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}