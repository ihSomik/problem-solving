// User function Template for C++

class Solution {
 public:
  void nextPermutation(vector<int>& arr) {
    // code here
    int n = arr.size();
    int i = n - 2;

    // find last ascending order index
    while (i >= 0 && arr[i] >= arr[i + 1]) i--;

    if (i >= 0) {
      // find the last element greater than arr[i]
      int j = n - 1;
      while (arr[j] <= arr[i]) j--;

      swap(arr[i], arr[j]);
    }

    reverse(arr.begin() + i + 1, arr.end());
  }
};