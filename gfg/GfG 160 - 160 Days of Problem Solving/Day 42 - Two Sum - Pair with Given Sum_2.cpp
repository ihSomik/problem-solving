class Solution {
 public:
  bool twoSum(vector<int>& arr, int target) {
    // code here
    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size() - 1;
    while (l < r) {
      if (arr[l] + arr[r] == target) return true;
      if (arr[l] + arr[r] < target)
        l++;
      else
        r--;
    }
    return false;
  }
};