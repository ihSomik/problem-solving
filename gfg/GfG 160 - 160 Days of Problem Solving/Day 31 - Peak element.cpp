class Solution {
 public:
  int peakElement(vector<int> &arr) {
    // a peak is always exists for this problem
    int l = 0, h = arr.size() - 1;
    while (l < h) {
      int m = l + (h - l) / 2;
      if (arr[m] > arr[m + 1])
        h = m;
      else
        l = m + 1;
    }
    return l;
  }
};