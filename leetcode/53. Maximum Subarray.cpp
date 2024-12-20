class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int sum(0), maxSum = nums[0];
    for (int n : nums) {
      sum = max(n, sum + n);
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
};