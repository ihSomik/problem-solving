// https://projecteuler.net/problem=15
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  int n = 1000;
  string num = "2";

  for (int i = 1; i < n; i++) {
    int carry = 0;
    for (int j = num.size() - 1; j >= 0; j--) {
      int val = (num[j] - '0') * 2 + carry;
      num[j] = (val % 10) + '0';
      carry = val / 10;
    }
    while (carry) {
      num = char((carry % 10) + '0') + num;
      carry /= 10;
    }
  }

  int sum = 0;
  for (char c : num) sum += c - '0';
  cout << sum << endl;
}