#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int n = 100001;
vector<bool> isPrime(n + 1, true);

void sieveOfEratosthenes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (isPrime[i])
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
}

int main() {
  fastread();
  sieveOfEratosthenes();
  int x;
  cin >> x;

  if (x <= 2)
    cout << 1 << endl;
  else
    cout << 2 << endl;

  for (int i = 2; i <= x + 1; i++) {
    if (isPrime[i])
      cout << 1 << " ";
    else
      cout << 2 << " ";
  }
}
