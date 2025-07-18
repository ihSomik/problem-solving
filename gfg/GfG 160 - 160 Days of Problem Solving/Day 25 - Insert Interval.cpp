// User function Template for C++

class Solution {
 public:
  vector<vector<int>> insertInterval(vector<vector<int>>& intervals,
                                     vector<int>& newInterval) {
    // code here
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();

    vector<vector<int>> result;
    result.push_back(intervals[0]);

    for (int i = 1; i < n; i++) {
      vector<int>& last = result.back();
      vector<int>& current = intervals[i];

      if (current[0] <= last[1])
        last[1] = max(last[1], current[1]);
      else
        result.push_back(current);
    }

    return result;
  }
};