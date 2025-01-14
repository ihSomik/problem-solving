class Solution {
 public:
  int minimumSize(vector<int>& nums, int maxOperations) {
    int left = 1, right = *max_element(nums.begin(), nums.end());
    int result = right;

    while (left <= right) {
      int mid = left + (right - left) / 2;
      long long operations(0);

      for (int x : nums) {
        if (x > mid) operations += (x - 1) / mid;

        if (operations > maxOperations) break;
      }

      if (operations <= maxOperations) {
        result = mid;
        right = mid - 1;
      } else
        left = mid + 1;
    }

    return result;
  }
};