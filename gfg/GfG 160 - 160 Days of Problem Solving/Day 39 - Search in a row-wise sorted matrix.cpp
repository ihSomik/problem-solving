

class Solution {
 public:
  bool khojTheSearch(vector<int> &row, int m, int x) {
    int l = 0, r = m - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (row[mid] == x) return true;
      if (row[mid] < x)
        l++;
      else
        r--;
    }
    return false;
  }
  // Function to search a given number in row-column sorted matrix.
  bool searchRowMatrix(vector<vector<int>> &mat, int x) {
    // code here
    int n = mat.size(), m = mat[0].size();

    for (int i = 0; i < n; i++)
      if (khojTheSearch(mat[i], m, x)) return true;

    return false;
  }
};