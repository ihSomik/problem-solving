#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int n = 1e6;
vector<bool> isPrime(n + 1, true);
vector<int> primeNumbers;

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (isPrime[i])
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
}

void primeNumbersArray() {
  for (int i = 2; i <= n; i++)
    if (isPrime[i]) primeNumbers.push_back(i);
}

int main() {
  fastread();
  sieveOfEratosthenes();
  primeNumbersArray();
  int sz = primeNumbers.size();
  int x;
  while (cin >> x) {
    if (!x) break;
    for (int p : primeNumbers) {
      if (isPrime[x - p]) {
        cout << x << " = " << p << " + " << x - p << endl;
        break;
      }
      // no need else condition because goldbach's conjecture is true for all
      // even numbers greater than 2
    }
  }
}
