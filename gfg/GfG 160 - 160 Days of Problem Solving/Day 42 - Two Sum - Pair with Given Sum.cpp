class Solution {
 public:
  bool twoSum(vector<int>& arr, int target) {
    // code here
    unordered_map<int, bool> m;
    for (int a : arr) {
      if (m[target - a]) return true;
      m[a] = true;
      ;
    }

    return false;
  }
};