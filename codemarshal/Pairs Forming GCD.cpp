// Pairs Forming GCD
// https://algo.codemarshal.org/contests/icpc-dhaka-19-preli/problems/G
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 10000000;
vector<ll> phi(N + 1);

int main() {
  fastread();

  // computing Euler's Totient function using a sieve
  for (int i = 1; i <= N; i++) phi[i] = i;
  for (int i = 2; i <= N; i++)
    if (phi[i] == i)  // i is prime
      for (int j = i; j <= N; j += i) phi[j] = phi[j] / i * (i - 1);

  for (int i = 1; i <= N; i++) phi[i] += phi[i - 1];  // prefix sum of phi

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    int n;
    ll p;
    cin >> n >> p;

    int l = 1, r = n, g = -1;
    while (l <= r) {
      int mid = (l + r) >> 1;
      int x = n / mid;
      if (phi[x] >= p) {
        g = max(g, mid);
        l = mid + 1;
      } else
        r = mid - 1;
    }

    cout << "Case " << tc << ": " << g << endl;
  }
  return 0;
}
