const int MOD = 1e9 + 7;

class Solution {
 public:
  int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    // dp[i][j][x] will store the number of ways to reach cell (i, j) with XOR
    // value x
    // int dp[m][n][16] = {};
    vector<vector<vector<int>>> dp(m,
                                   vector<vector<int>>(n, vector<int>(16, 0)));

    dp[0][0][grid[0][0]] = 1;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        for (int x = 0; x < 16; x++) {
          if (dp[i][j][x] == 0) continue;

          if (j + 1 < n)
            dp[i][j + 1][x ^ grid[i][j + 1]] =
                (dp[i][j + 1][x ^ grid[i][j + 1]] + dp[i][j][x]) % MOD;

          if (i + 1 < m)
            dp[i + 1][j][x ^ grid[i + 1][j]] =
                (dp[i + 1][j][x ^ grid[i + 1][j]] + dp[i][j][x]) % MOD;
        }
      }
    }

    return dp[m - 1][n - 1][k];
  }
};
