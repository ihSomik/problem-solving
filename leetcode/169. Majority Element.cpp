class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    // Boyer-Moore Voting Algorithm
    int candidate = -1, count = 0;

    for (int a : nums) {
      if (a == candidate)
        count++;
      else if (count == 0) {
        candidate = a;
        count++;
      } else
        count--;
    }
    return candidate;
  }
};