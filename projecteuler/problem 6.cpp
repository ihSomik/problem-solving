#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumOfSquares(int n) { return (n * (n + 1) * (2 * n + 1)) / 6; }

ll squareOfSum(int n) {
  // Sum of numbers = n(n + 1) / 2
  ll sum = (n * (n + 1)) / 2;
  return sum * sum;
}

int main() {
  int n = 100;
  cout << squareOfSum(n) - sumOfSquares(n) << endl;
}
