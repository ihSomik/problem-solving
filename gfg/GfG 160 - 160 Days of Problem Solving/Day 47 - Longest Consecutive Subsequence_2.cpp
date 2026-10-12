class Solution {
 public:
  // Function to return length of longest subsequence of consecutive integers.
  int longestConsecutive(vector<int>& arr) {
    // Your code here
    unordered_set<int> nums(arr.begin(), arr.end());

    int cnt = 1, maxCnt = 1;

    for (int n : nums) {
      if (nums.find(n - 1) == nums.end()) {
        cnt = 1;
        int curr = n;
        while (nums.find(curr + 1) != nums.end()) {
          cnt++;
          curr++;
        }

        maxCnt = max(maxCnt, cnt);
      }
    }
    return maxCnt;
  }
};