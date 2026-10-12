// https://projecteuler.net/problem=20
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n = 100;
  string fact = "1";
  for (int i = 2; i <= n; i++) {
    int carry = 0;
    for (int j = fact.size() - 1; j >= 0; j--) {
      int prod = (fact[j] - '0') * i + carry;
      fact[j] = (prod % 10) + '0';
      carry = prod / 10;
    }
    while (carry) {
      fact = char((carry % 10) + '0') + fact;
      carry /= 10;
    }
  }

  int sum(0);
  for (char c : fact) sum += (c - '0');
  cout << sum << endl;
}