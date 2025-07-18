class Solution {
 public:
  int missingNumber(vector<int> &arr) {
    // code here
    int n = arr.size();
    vector<bool> visited(n + 1, false);

    for (auto a : arr)
      if (a <= n && a > 0) visited[a] = true;

    for (int i = 1; i <= n; i++)
      if (!visited[i]) return i;

    return n + 1;
  }
};