// https://dimikoj.com/problems/49/is-prime
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int N = 1000000;
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

  if (n <= N) {
    if (isPrime[n])
      cout << n << " is a prime" << endl;
    else
      cout << n << " is not a prime" << endl;
    return;
  }

  int sq = sqrt(n);
  bool prime = true;
  for (int p : primes) {
    if (p > sq) break;
    if (n % p == 0) {
      prime = false;
      break;
    }
  }

  if (prime)
    cout << n << " is a prime" << endl;
  else
    cout << n << " is not a prime" << endl;
}

int main() {
  // fastread();
  sieveOfEratosthenes();
  int t;
  cin >> t;
  while (t--) solve();
}
