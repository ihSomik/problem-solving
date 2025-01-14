#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int n = 1e8;
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

  for (int i = 0; i < sz; i += 100) cout << primeNumbers[i] << endl;
}
