// User function Template for C++

class Solution {
 public:
  bool check(vector<int>& stalls, int n, int k, int dist) {
    int prevPos = stalls[0];
    int count = 1;

    for (int i = 1; i < n; i++)
      if (stalls[i] - prevPos >= dist) {
        count++;
        prevPos = stalls[i];
      }

    return count >= k;
  }

  int aggressiveCows(vector<int>& stalls, int k) {
    // Write your code here
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());

    int h = stalls[n - 1] - stalls[0], l = 1;
    int minDist = 1;

    while (l <= h) {
      int mid = l + (h - l) / 2;
      if (check(stalls, n, k, mid)) {
        minDist = mid;
        l = mid + 1;
      } else
        h = mid - 1;
    }

    return minDist;
  }
};
