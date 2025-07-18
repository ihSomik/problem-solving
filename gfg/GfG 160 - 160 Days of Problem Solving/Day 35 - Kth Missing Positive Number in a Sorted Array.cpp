// User function template for C++

class Solution {
 public:
  int kthMissing(vector<int> &arr, int k) {
    // Your code goes here
    unordered_map<int, bool> m;
    for (int a : arr) m[a] = true;

    for (int i = 1; i <= 1000000; i++) {
      if (!m[i]) k--;
      if (k == 0) return i;
    }
  }
};