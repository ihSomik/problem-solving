class Solution {
 public:
  void rotateMatrix(vector<vector<int>>& mat) {
    // code here
    int n = mat.size();
    vector<vector<int>> rotated(n, vector<int>(n));

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) rotated[n - j - 1][i] = mat[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) mat[i][j] = rotated[i][j];
  }
};
