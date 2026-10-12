class Solution {
 public:
  int cntSubarrays(vector<int> &arr, int k) {
    // code here
    int currSum(0), cnt(0);
    unordered_map<int, int> preSumFreq;
    preSumFreq[0] = 1;  // base case: sum 0 has occured once

    for (int num : arr) {
      currSum += num;
      cnt += preSumFreq[currSum - k];
      preSumFreq[currSum]++;
    }

    return cnt;
  }
};