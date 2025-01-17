// Two Knights
// https://cses.fi/problemset/task/1072
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int k = 1; k <= n; k++) {
    long long x = k * k;
    long long total_combinations = x * (x - 1) / 2;
    // number  of ways two knights can be placed on x squares = xC2

    long long attacking_combinations = 4 * (k - 1) * (k - 2);
    /*
        number of 2x3 dimensions = (k-1)*(k-2)
        number of 3x2 dimensions = (k-2)*(k-1)
        each dimension has 2 attacking positions
    */
    long long ways = total_combinations - attacking_combinations;
    cout << ways << endl;
  }

  return 0;
}