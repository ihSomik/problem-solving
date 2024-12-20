class Solution {
 public:
  bool exist[10001];
  int maxCount(vector<int>& banned, int n, int maxSum) {
    for (auto u : banned) exist[u] = 1;
    int sum(0);
    int count(0);
    for (int i = 1; i <= n; i++) {
      if (!exist[i] && sum + i <= maxSum) {
        count++;
        sum += i;
      }
    }
    return count;
  }
};