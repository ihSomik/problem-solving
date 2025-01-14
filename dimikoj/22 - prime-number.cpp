// https://dimikoj.com/problems/22/prime-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

int n = 100000;
bool isPrime[100000];

int sieveOfEratosthenes() {
  for (int i = 2; i <= n; i++) isPrime[i] = true;
  isPrime[1] = false;

  for (int i = 2; i * i <= n; i++)
    if (isPrime[i])
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
}

void solve() {
  int a, b;
  cin >> a >> b;

  int count(0);
  for (int i = a; i <= b; i++)
    if (isPrime[i]) count++;

  cout << count << endl;
}

int main() {
  // fastread();
  sieveOfEratosthenes();
  int t = 1;
  cin >> t;
  while (t--) solve();
}
