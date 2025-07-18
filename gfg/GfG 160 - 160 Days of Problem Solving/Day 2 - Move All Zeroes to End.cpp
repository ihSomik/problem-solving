// User function template for C++
class Solution {
 public:
  vector<int> pushZerosToEnd(vector<int>& arr) {
    // code here
    int n = arr.size();
    int l = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] != 0) {
        arr[l] = arr[i];
        l++;
      }
    }

    for (int i = l; i < n; i++) arr[i] = 0;

    return arr;
  }
};