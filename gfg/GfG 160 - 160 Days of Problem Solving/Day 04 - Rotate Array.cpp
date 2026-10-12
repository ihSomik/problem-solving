class Solution {
 public:
  // Function to rotate an array by d elements in counter-clockwise direction.
  void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d = d % n;

    for (int i = 0; i < d / 2; i++) swap(arr[i], arr[d - i - 1]);

    for (int i = d; i < (d + 1 + n) / 2; i++)
      swap(arr[i], arr[n - (i - d + 1)]);

    for (int i = 0; i < n / 2; i++) swap(arr[i], arr[n - i - 1]);
  }
};