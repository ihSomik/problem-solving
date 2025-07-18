// https://dimikoj.com/problems/49/is-prime
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int n = 1000000;
vector<bool> isPrime(n + 1, true);
vector<int> primeNumbers;

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
    }
  }
}

void primeNumbersArray() {
  for (int i = 2; i <= n; i++)
    if (isPrime[i]) primeNumbers.push_back(i);
}

void solve() {
  ll N;
  cin >> N;

  if (N <= n) {
    if (isPrime[N])
      cout << N << " is a prime" << endl;
    else
      cout << N << " is not a prime" << endl;
    return;
  }

  int sq = sqrt(N);
  bool prime = true;
  for (int p : primeNumbers) {
    if (p > sq) break;
    if (N % p == 0) {
      prime = false;
      break;
    }
  }

  if (prime)
    cout << N << " is a prime" << endl;
  else
    cout << N << " is not a prime" << endl;
}

int main() {
  // fastread();
  sieveOfEratosthenes();
  primeNumbersArray();
  int t;
  cin >> t;
  while (t--) solve();
}
