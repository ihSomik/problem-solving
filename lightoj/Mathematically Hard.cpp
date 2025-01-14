#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

const int N = 5000000;
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

int main() {
  // fastread();
  sieveOfEratosthenes();

  int n = 5000000;
  vector<ull> phi(n + 1);
  for (int i = 1; i <= n; i++) phi[i] = i;

  for (int p : primes)
    for (int i = p; i <= n; i += p) phi[i] = phi[i] / p * (p - 1);

  for (int i = 1; i <= n; i++)
    phi[i] = phi[i - 1] + (phi[i] * phi[i]);  // prefix sum of score

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int a, b;
    cin >> a >> b;
    cout << "Case " << tc << ": " << phi[b] - phi[a - 1] << endl;
  }
}