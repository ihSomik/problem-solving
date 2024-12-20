class Solution {
  public: vector < int > twoSum(vector < int > & numbers, int target) {
    for (int i = 0; i < numbers.size(); i++) {
      int val = target - numbers[i];
      int lb = lower_bound(numbers.begin() + i + 1, numbers.end(), val) - numbers.begin();
      if (lb < numbers.size() && numbers[lb] == val) return {i + 1, lb + 1};
    }
    return {-1, -1};
  }
};