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
    int maxDist = stalls[n - 1] - stalls[0];
    int minDist;

    for (int dist = 1; dist <= maxDist; dist++)
      if (check(stalls, n, k, dist))
        minDist = dist;  // check if dist is possible

    return minDist;
  }
};
