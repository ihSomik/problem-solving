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

void primeFact(int n) {
  vector<int> factors;
  for (int p : primeNumbers) {
    if ((ll)p * p > n) break;

    while (n % p == 0) {
      factors.push_back(p);
      n /= p;
    }
  }
  if (n != 1) factors.push_back(n);

  for (int i = 0; i < factors.size(); i++) {
    cout << factors[i];
    if (i != factors.size() - 1) cout << " x ";
  }
  cout << endl;
}

int main() {
  // fastread();
  sieveOfEratosthenes();
  primeNumbersArray();

  int g;
  while (cin >> g) {
    if (g == 0) break;
    cout << g << " = ";
    if (g < 0) {
      g = -g;
      cout << "-1 x ";
    }

    primeFact(g);
  }
}
