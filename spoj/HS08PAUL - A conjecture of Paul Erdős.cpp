#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int n = 1e7;
vector<bool> isPrime(n + 1, true);
vector<int> preCount(n + 1, 0);

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (isPrime[i])
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
}

int main() {
  fastread();
  sieveOfEratosthenes();

  for (int x = 0; x <= 3162; x++) {
    for (int y = 0; y <= 56; y++) {
      int val = x * x + y * y * y * y;
      if (val <= n && isPrime[val]) preCount[val] = 1;
    }
  }

  for (int i = 1; i <= n; i++) preCount[i] += preCount[i - 1];

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    cout << preCount[x] << endl;
  }
}
