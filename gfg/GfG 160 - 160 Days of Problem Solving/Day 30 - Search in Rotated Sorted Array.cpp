class Solution {
 public:
  int search(vector<int>& arr, int key) {
    // Code Here
    int l = 0, h = arr.size() - 1;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (arr[m] == key) return m;

      if (arr[l] <= arr[m])
        if (key >= arr[l] && key < arr[m])
          h = m - 1;
        else
          l = m + 1;
      else if (key > arr[m] && key <= arr[h])
        l = m + 1;
      else
        h = m - 1;
    }
    return -1;
  }
};
