#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 1000000;
vector<int> phi(N + 1);
vector<ll> lcmSum(N + 1);

void precompute() {
  // computing Euler's Totient function using a sieve
  for (int i = 1; i <= N; i++) phi[i] = i;
  for (int i = 2; i <= N; i++)
    if (phi[i] == i)  // i is prime
      for (int j = i; j <= N; j += i) phi[j] = phi[j] / i * (i - 1);

  for (int i = 1; i <= N; i++)
    for (int j = i; j <= N; j += i) lcmSum[j] += (ll)i * phi[i];
}

int main() {
  fastread();
  precompute();

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll result = (lcmSum[n] + 1LL) * n / 2;  // LCM sum for the given n
    cout << result << endl;
  }
  return 0;
}
