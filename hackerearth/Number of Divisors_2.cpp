// https://www.hackerearth.com/problem/algorithm/number-of-divisors-14/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

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

void solve() {
  ll n;
  cin >> n;
  vector<int> powers;

  for (int p : primeNumbers) {
    if ((ll)p * p > n) break;
    if (n % p == 0) {
      int count(0);
      while (n % p == 0) {
        n /= p;
        count++;
      }
      powers.push_back(count);
    }
  }
  if (n != 1) powers.push_back(1);

  int divisors = 1;
  for (int p : powers) divisors *= (p + 1);
  cout << divisors << endl;
}

int main() {
  fastread();
  sieveOfEratosthenes();
  primeNumbersArray();

  int t;
  cin >> t;
  while (t--) solve();
}
