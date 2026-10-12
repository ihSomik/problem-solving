// https://projecteuler.net/problem=14
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

unordered_map<ll, int> collatzLen;

int solve(ll n) {
  if (n == 1) return 1;
  if (collatzLen.count(n)) return collatzLen[n];

  ll next;
  if (n & 1)
    next = 3 * n + 1;
  else
    next = n / 2;

  int length = 1 + solve(next);
  collatzLen[n] = length;
  return length;
}

int main() {
  fastread();
  int maxLen = 0;
  int start = -1;

  for (int i = 1; i < 1000000; i++) {
    int length = solve(i);
    if (length > maxLen) {
      maxLen = length;
      start = i;
    }
  }
  cout << start << endl << maxLen << endl;
}