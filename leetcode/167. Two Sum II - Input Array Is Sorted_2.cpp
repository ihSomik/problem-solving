class Solution {
  public: vector < int > twoSum(vector < int > & numbers, int target) {
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
      int t = target - numbers[i];

      int left = i + 1;
      int right = n - 1;
      int index = -1;
      while (left <= right) {
        int mid = left + (right - left) / 2;
        if (numbers[mid] == t) {
            index = mid;
            break;
        }
        else if (numbers[mid] > t) right = mid - 1;
        else left = mid + 1;
      }

      if (index != -1) return {i + 1, index + 1};
    }
    return {-1, -1};
  }
};