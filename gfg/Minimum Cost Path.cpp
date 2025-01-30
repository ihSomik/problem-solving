typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<pii> vii;

class Solution {
 public:
  int minimumCostPath(vector<vector<int>> &grid) {
    int N = grid.size();
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
    priority_queue<piii, vector<piii>, greater<piii>> pq;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    dist[0][0] = grid[0][0];
    pq.push({grid[0][0], {0, 0}});  // {cost, {x, y}}

    while (!pq.empty()) {
      auto curr = pq.top();
      pq.pop();
      int cost = curr.first;
      int x = curr.second.first;
      int y = curr.second.second;

      if (visited[x][y]) continue;
      visited[x][y] = true;

      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < N && ny < N && !visited[nx][ny]) {
          int newCost = cost + grid[nx][ny];
          if (newCost < dist[nx][ny]) {
            dist[nx][ny] = newCost;
            pq.push({newCost, {nx, ny}});
          }
        }
      }
    }

    return dist[N - 1][N - 1];
  }
};
