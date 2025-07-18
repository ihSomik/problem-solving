

class Solution {
 public:
  // Function to search a given number in row-column sorted matrix.
  bool searchMatrix(vector<vector<int>> &mat, int x) {
    // code here
    int n = mat.size(), m = mat[0].size();

    int lo = 0, hi = n * m - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;

      int r = mid / m;
      int c = mid % m;

      if (mat[r][c] == x) return true;
      if (mat[r][c] < x)
        lo = mid + 1;
      else
        hi = mid - 1;
    }

    return false;
  }
};
