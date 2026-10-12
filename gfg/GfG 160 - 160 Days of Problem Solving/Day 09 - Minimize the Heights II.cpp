// User function template for C++

class Solution {
 public:
  int getMinDiff(vector<int> &arr, int k) {
    // code here
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int minDiff = arr[n - 1] - arr[0];  // initial minDiff
    for (int i = 1; i < n; i++) {
      if (arr[i] < k) continue;
      // all elements before i increased by k and from i to n-1 decreased by k
      int minH = min(arr[0] + k, arr[i] - k);
      int maxH = max(arr[n - 1] - k, arr[i - 1] + k);
      minDiff = min(minDiff, maxH - minH);
    }
    return minDiff;
  }
};