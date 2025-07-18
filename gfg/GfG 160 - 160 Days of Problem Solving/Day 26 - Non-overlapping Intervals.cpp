class Solution {
 public:
  int minRemoval(vector<vector<int>> &intervals) {
    // code here
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    int end = intervals[0][1];
    int cnt(0);

    for (int i = 1; i < n; i++) {
      if (intervals[i][0] < end) {
        end = min(end, intervals[i][1]);
        cnt++;
      } else
        end = intervals[i][1];
    }

    return cnt;
  }
};
