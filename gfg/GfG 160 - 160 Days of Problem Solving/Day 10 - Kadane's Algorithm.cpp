class Solution {
 public:
  int maxSubarraySum(vector<int> &arr) {
    // Your code here
    int n = arr.size();
    int sum = arr[0], maxSum = arr[0];
    for (int i = 1; i < n; i++) {
      sum = max(sum + arr[i], arr[i]);
      maxSum = max(sum, maxSum);
    }
    return maxSum;
  }
};