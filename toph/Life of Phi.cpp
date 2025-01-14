#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 1000000;
vector<ll> phi(N + 1);

int main() {
  fastread();

  // computing Euler's Totient function using a sieve
  for (int i = 1; i <= N; i++) phi[i] = i;
  for (int i = 2; i <= N; i++)
    if (phi[i] == i)  // i is prime
      for (int j = i; j <= N; j += i) phi[j] = phi[j] / i * (i - 1);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll f = (ll)phi[n] * n / 2;
    ll total_sum = (ll)n * (n - 1) / 2;
    cout << total_sum - f << endl;
  }
  return 0;
}
