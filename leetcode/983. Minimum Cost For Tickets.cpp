class Solution {
 public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    int lastDay = days.back();
    vector<int> dp(lastDay + 1, 0);
    // dp[i] is the min cost to travel until day i
    unordered_set<int> travelDays(days.begin(), days.end());

    for (int i = 1; i <= lastDay; i++) {
      if (travelDays.find(i) == travelDays.end())
        dp[i] = dp[i - 1];
      else
        dp[i] = min({dp[i - 1] + costs[0], dp[max(0, i - 7)] + costs[1],
                     dp[max(0, i - 30)] + costs[2]});
    }

    return dp[lastDay];
  }
};