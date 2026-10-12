// https://projecteuler.net/problem=27
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int n = 1000000;
bool isPrime[1000001];

int sieveOfEratosthenes() {
  for (int i = 2; i <= n; i++) isPrime[i] = true;
  isPrime[1] = false;

  for (int i = 2; i * i <= n; i++)
    if (isPrime[i])
      for (int j = i * i; j <= n; j += i) isPrime[j] = false;
}

int main() {
  fastread();
  sieveOfEratosthenes();

  int maxCount = 0, prod = 0;
  for (int a = -999; a < 1000; a++) {
    for (int b = -1000; b <= 1000; b++) {
      int count = 0;
      for (int n = 0;; n++) {
        int val = n * n + a * n + b;
        if (val > 0 && isPrime[val])
          count++;
        else
          break;
      }
      if (count > maxCount) {
        maxCount = count;
        prod = a * b;
      }
    }
  }
  cout << prod << endl;
}