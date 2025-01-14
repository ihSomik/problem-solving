class Solution {
 public:
  int minimumOperations(vector<int>& nums) {
    unordered_map<int, int> freq;

    for (int num : nums) freq[num]++;

    int operations = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (freq[nums[i]] > 1) {
        freq[nums[i]]--;
        operations = ceil((i + 1) / 3.0);
      }
    }

    return operations;
  }
};