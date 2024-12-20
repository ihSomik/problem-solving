#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int n = 2000000;
vector<bool> isPrime(n + 1, true);

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
    }
  }
}

int main() {
  sieveOfEratosthenes();
  ll sum(0);
  for (int i = 2; i < n; i++)
    if (isPrime[i]) sum += i;
  cout << sum << endl;
}
