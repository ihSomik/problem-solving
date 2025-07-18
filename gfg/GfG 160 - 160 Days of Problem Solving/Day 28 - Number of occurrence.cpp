class Solution {
 public:
  int countFreq(vector<int>& arr, int target) {
    // code here
    int l = 0, r = arr.size() - 1, first = -1;
    while (l <= r) {
      int m = l + (r - l) / 2;
      if (arr[m] == target) {
        first = m;
        r = m - 1;
      } else if (arr[m] < target)
        l = m + 1;
      else
        r = m - 1;
    }

    l = 0, r = arr.size() - 1;
    int last = -1;
    while (l <= r) {
      int m = l + (r - l) / 2;
      if (arr[m] == target) {
        last = m;
        l = m + 1;
      } else if (arr[m] < target)
        l = m + 1;
      else
        r = m - 1;
    }

    if (first == -1 or last == -1)
      return 0;
    else
      return last - first + 1;
  }
};
