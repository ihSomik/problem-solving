class Solution {
 public:
  int maximumProfit(vector<int> &prices) {
    // code here
    int minPrice = INT_MAX, maxProfit = 0;
    for (int p : prices) {
      minPrice = min(p, minPrice);
      maxProfit = max(maxProfit, p - minPrice);
    }
    return maxProfit;
  }
};
