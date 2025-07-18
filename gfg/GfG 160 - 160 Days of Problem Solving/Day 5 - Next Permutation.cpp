// User function Template for C++

class Solution {
 public:
  void nextPermutation(vector<int>& arr) {
    // code here
    if (!next_permutation(arr.begin(), arr.end())) sort(arr.begin(), arr.end());
  }
};