// https://projecteuler.net/problem=30
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  vector<int> powers;
  for (int i = 0; i <= 9; i++) powers.push_back(pow(i, 5));

  int limit = powers[9] * 6;  // the valid number cannot be more than 6 digits,
                              // as 7*9^5 is a 6 digit number
  ll ans = 0;
  for (int i = 10; i <= limit; i++) {
    string s = to_string(i);
    int n = s.length();
    if (i > n * powers[9]) continue;

    int temp = i;
    ll digSum = 0;
    while (temp) {
      int dig = temp % 10;
      digSum += powers[dig];
      temp /= 10;
    }
    if (digSum == i) ans += i;
  }
  cout << ans << endl;
}