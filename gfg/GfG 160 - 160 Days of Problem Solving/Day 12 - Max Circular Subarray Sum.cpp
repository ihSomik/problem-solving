class Solution {
 public:
  int circularSubarraySum(vector<int> &arr) {
    // code here
    int n = arr.size();
    int currMin = arr[0], currMax = arr[0], globMin = arr[0], globMax = arr[0],
        sum = arr[0];
    for (int i = 1; i < n; i++) {
      currMin = min(arr[i], currMin + arr[i]);
      currMax = max(arr[i], currMax + arr[i]);
      globMin = min(globMin, currMin);
      globMax = max(globMax, currMax);
      sum += arr[i];
    }
    if (sum == globMin) return globMax;
    return max(globMax, sum - globMin);  // max circular subarray sum = total
                                         // sum - min subarray sum
  }
};