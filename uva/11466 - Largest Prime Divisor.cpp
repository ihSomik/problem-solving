#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

set<ll> s;
const int N = 10000000;
vector<bool> isPrime(N + 1, true);
vector<int> primeNumbers;

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= N; i++)
    if (isPrime[i])
      for (int j = i * i; j <= N; j += i) isPrime[j] = false;
}

void primeNumbersArray() {
  for (int i = 2; i <= N; i++)
    if (isPrime[i]) primeNumbers.push_back(i);
}

void primeFact(ll n) {
  for (int p : primeNumbers) {
    if ((ll)p * p > n) break;
    if (n % p == 0) {
      s.insert(p);
      while (n % p == 0) n /= p;
    }
  }
  if (n != 1) s.insert(n);

  if (s.size() > 1)
    cout << *s.rbegin() << endl;
  else
    cout << -1 << endl;
}

int main() {
  // fastread();
  sieveOfEratosthenes();
  primeNumbersArray();

  ll n;
  while (cin >> n) {
    s.clear();
    if (n == 0) break;
    if (n < 0) n = -n;
    primeFact(n);
  }
}
