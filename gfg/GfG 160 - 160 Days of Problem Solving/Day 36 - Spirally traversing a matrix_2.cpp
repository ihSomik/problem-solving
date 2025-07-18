class Solution {
 public:
  vector<int> spirallyTraverse(vector<vector<int>> &mat) {
    // code here
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    vector<int> v;

    int r = 0, c = 0;
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int idx = 0;

    for (int i = 0; i < m * n; i++) {
      v.push_back(mat[r][c]);
      vis[r][c] = true;

      int newR = r + dr[idx];
      int newC = c + dc[idx];

      if (newR >= 0 && newR < m && newC >= 0 && newC < n && !vis[newR][newC]) {
        r = newR;
        c = newC;
      } else {
        idx = (idx + 1) % 4;
        r = r + dr[idx];
        c = c + dc[idx];
      }
    }
    return v;
  }
};