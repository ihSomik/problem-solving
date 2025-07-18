// User function template for C++

class Solution {
 public:
  int kthMissing(vector<int> &arr, int k) {
    // Your code goes here
    int n = arr.size();
    int missing = n + k;
    int l = 0, h = n - 1;

    while (l <= h) {
      int m = l + (h - l) / 2;
      if (arr[m] > k + m) {
        missing = k + m;
        h = m - 1;
      } else
        l = m + 1;
    }

    return missing;
  }
};
