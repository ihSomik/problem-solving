

class Solution {
 public:
  // Function to search a given number in row-column sorted matrix.
  bool searchMatrix(vector<vector<int>> &mat, int x) {
    // code here
    int n = mat.size(), m = mat[0].size();
    int l = 0, r = n - 1, row = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (mat[mid][0] == x) return true;
      if (mat[mid][0] < x) {
        l = mid + 1;
        row = mid;  // selected row
      } else
        r = mid - 1;
    }

    if (row == -1) return false;  // now row selected

    l = 0, r = m - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (mat[row][mid] == x) return true;
      if (mat[row][mid] < x)
        l = mid + 1;
      else
        r = mid - 1;
    }

    return false;
  }
};
