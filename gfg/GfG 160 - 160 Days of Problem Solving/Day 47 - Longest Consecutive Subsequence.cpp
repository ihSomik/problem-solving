class Solution {
 public:
  // Function to return length of longest subsequence of consecutive integers.
  int longestConsecutive(vector<int>& arr) {
    // Your code here
    sort(arr.begin(), arr.end());
    int n = arr.size();

    int cnt = 1, maxCnt = 1;
    for (int i = 1; i < n; i++) {
      if (arr[i] == arr[i - 1])
        continue;
      else if (arr[i] - arr[i - 1] == 1)
        cnt++;
      else
        cnt = 1;

      maxCnt = max(maxCnt, cnt);
    }
    return maxCnt;
  }
};