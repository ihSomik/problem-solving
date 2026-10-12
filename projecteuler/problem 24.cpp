// https://projecteuler.net/problem=24
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 1000000 - 1;
  string result;

  vector<int> fact(11, 1);
  for (int i = 1; i <= 10; i++) fact[i] = fact[i - 1] * i;

  for (int pos = 10; pos > 0; pos--) {
    int block_size = fact[pos - 1];
    int idx = n / block_size;
    n = n % block_size;

    result.push_back('0' + digits[idx]);
    digits.erase(digits.begin() + idx);
  }

  cout << result << endl;
}
