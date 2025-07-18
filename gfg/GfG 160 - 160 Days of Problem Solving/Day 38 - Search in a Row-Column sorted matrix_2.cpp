// User function template for C++
class Solution {
 public:
  bool khojTheSearch(vector<int> &row, int m, int x) {
    int l = 0, r = m - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (row[mid] == x) return true;
      if (row[mid] < x)
        l = mid + 1;
      else
        r = mid - 1;
    }

    return false;
  }

  bool matSearch(vector<vector<int>> &mat, int x) {
    // your code here
    int n = mat.size(), m = mat[0].size();

    for (int row = 0; row < n; row++)
      if (khojTheSearch(mat[row], m, x)) return true;

    return false;
  }
};
