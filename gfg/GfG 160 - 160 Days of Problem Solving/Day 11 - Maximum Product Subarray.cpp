class Solution {
 public:
  int maxProduct(vector<int> &arr) {
    // code here
    int n = arr.size();
    int currMax = arr[0], currMin = arr[0], result = arr[0];
    for (int i = 1; i < n; i++) {
      int tempMax = max({arr[i], currMax * arr[i], currMin * arr[i]});
      int tempMin = min({arr[i], currMax * arr[i], currMin * arr[i]});

      currMax = tempMax;
      currMin = tempMin;
      result = max(result, currMax);
    }
    return result;
  }
};