#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int N = 1120;
bitset<N + 1> isPrime;
vector<int> primes;
int memo[N + 1][15][188];
// number of primes <= x is = x / (ln(x)-1)

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

int solve(int n, int k, int i) {
  if (n == 0 && k == 0) return 1;
  if (n < 0 || k < 0 || i == primes.size()) return 0;

  if (memo[n][k][i] != -1) return memo[n][k][i];

  int include = solve(n - primes[i], k - 1, i + 1);  // include current prime
  int exclude = solve(n, k, i + 1);                  // exclude current prime

  return memo[n][k][i] = include + exclude;
}

int main() {
  fastread();
  sieveOfEratosthenes();

  memset(memo, -1, sizeof(memo));

  int n, k;
  while (cin >> n >> k && (n || k)) cout << solve(n, k, 0) << endl;

  return 0;
}
