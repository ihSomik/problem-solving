class Solution {
 public:
  unsigned long long change(int amount, vector<int>& coins) {
    vector<unsigned long long> dp(amount + 1, 0);
    dp[0] = 1;

    // dp[j] = number of ways to produce j cents
    for (int c : coins)
      for (int j = c; j <= amount; j++) dp[j] += dp[j - c];

    return dp[amount];
  }
};