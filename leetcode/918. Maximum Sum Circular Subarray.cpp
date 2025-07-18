class Solution {
 public:
  int maxSubarraySumCircular(vector<int>& nums) {
    int n = nums.size();
    int currMin = nums[0], currMax = nums[0], globMin = nums[0],
        globMax = nums[0], sum = nums[0];

    for (int i = 1; i < n; i++) {
      currMin = min(nums[i], currMin + nums[i]);
      currMax = max(nums[i], currMax + nums[i]);
      globMin = min(globMin, currMin);
      globMax = max(globMax, currMax);
      sum += nums[i];
    }
    if (sum == globMin) return globMax;
    return max(globMax, sum - globMin);  // max circular subarray sum = total
                                         // sum - min subarray sum
  }
};