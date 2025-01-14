class Solution {
 public:
  int maxDistinctElements(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int count = 0;
    int last = INT_MIN;

    for (int n : nums) {
      int temp = max(last + 1, n - k);

      if (temp <= n + k) {
        count++;
        last = temp;
      }
    }

    return count;
  }
};
