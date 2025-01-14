#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

int main() {
  // fastread();

  int n = 5000000;
  vector<ull> phi(n + 1);

  // computing Euler's Totient function using a sieve
  for (int i = 1; i <= n; i++) phi[i] = i;
  for (int i = 2; i <= n; i++)
    if (phi[i] == i)  // i is prime
      for (int j = i; j <= n; j += i) phi[j] = phi[j] / i * (i - 1);

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