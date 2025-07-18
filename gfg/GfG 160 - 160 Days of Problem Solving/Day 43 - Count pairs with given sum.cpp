class Solution {
 public:
  int countPairs(vector<int> &arr, int target) {
    // Code here
    map<int, int> m;
    int count(0);
    for (int a : arr) {
      if (m[target - a]) count += m[target - a];
      m[a]++;
    }
    return count;
  }
};