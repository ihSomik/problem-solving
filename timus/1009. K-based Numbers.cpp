#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  // dp[i] will store the number of valid k-based numbers with exactly i digits
  long long dp[n + 1];
  dp[1] = k - 1;  // first digit can be any number from 1 to k-1 (k-1 choices)
  dp[2] =
      (k - 1) * k;  // second digit can be any number from 0 to k-1 (k choices).

  // for i >= 3 ,
  //  Case 1: The last digit is non-zero (1 to k-1).
  //  - The previous (i-1) digits can form any valid sequence.
  //  - There are (k-1) choices for the last digit.
  //  Contribution = (k-1) * dp[i-1].

  // Case 2: The last digit is zero.
  // - The second-last digit must be non-zero (1 to k-1).
  // - The first (i-2) digits can form any valid sequence.
  // - There are (k-1) choices for the second-last digit.
  // Contribution = (k-1) * dp[i-2].

  // Total valid numbers for i digits = sum of both cases.

  for (int i = 3; i <= n; i++)
    dp[i] = (k - 1) * dp[i - 1] + (k - 1) * dp[i - 2];

  cout << dp[n] << endl;
  return 0;
}
