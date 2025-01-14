#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

set<ll> s;
const int N = 1000000;
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
}

int main() {
  fastread();
  sieveOfEratosthenes();
  primeNumbersArray();

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      primeFact(a[i]);
    }

    cout << "Case #" << tc << ": " << s.size() << endl;
    for (auto p : s) cout << p << endl;

    s.clear();
  }
}
