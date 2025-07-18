class Solution {
 public:
  int findMin(vector<int>& arr) {
    // complete the function here
    int l = 0, h = arr.size() - 1;
    while (l < h) {
      int m = l + (h - l) / 2;
      if (arr[m] > arr[h])
        l = m + 1;
      else
        h = m;
    }
    return arr[l];
  }
};
