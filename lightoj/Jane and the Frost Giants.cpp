#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 201;
char grid[N][N];
int janDist[N][N], fireDist[N][N];
vector<pair<int, int>> fireSources;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int r, c;

void bfsFire() {
  queue<pair<int, int>> q;
  for (auto f : fireSources) {
    q.push(f);
    fireDist[f.first][f.second] = 0;
  }

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int x1 = x + dx[i];
      int y1 = y + dy[i];

      if (x1 > 0 && x1 <= r && y > 0 && y <= c && grid[x1][y1] == '.' &&
          fireDist[x1][y1] == -1) {
        fireDist[x1][y1] = fireDist[x][y] + 1;
        q.push({x1, y1});
      }
    }
  }
}

void bfsJan(int xj, int yj) {
  queue<pair<int, int>> q;
  q.push({xj, yj});
  janDist[xj][yj] = 0;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int x1 = x + dx[i];
      int y1 = y + dy[i];

      if (x1 > 0 && x1 <= r && y > 0 && y <= c && grid[x1][y1] == '.' &&
          janDist[x1][y1] == -1 && janDist[x][y] + 1 < fireDist[x1][y1]) {
        janDist[x1][y1] = janDist[x][y] + 1;
        q.push({x1, y1});
      }
    }
  }
}

int main() {
  fastread();

  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    fireSources.clear();
    memset(janDist, -1, sizeof(janDist));
    memset(fireDist, -1, sizeof(fireDist));

    cin >> r >> c;
    int x, y;

    for (int i = 1; i <= r; i++) {
      for (int j = 1; j <= c; j++) {
        cin >> grid[i][j];
        if (grid[i][j] == 'J') {
          x = i;
          y = j;
        } else if (grid[i][j] == 'F')
          fireSources.push_back({i, j});
      }
    }

    bfsFire();
    bfsJan(x, y);

    int time = 1e5;
    for (int i = 1; i <= r; i++)
      for (int j = 1; j <= c; j++)
        if ((i == 1 || i == r || j == 1 || j == c) && janDist[i][j] != -1)
          time = min(time, janDist[i][j]);

    if (time == 1e5)
      cout << "Case " << tc << ": " << "IMPOSSIBLE" << endl;
    else
      cout << "Case " << tc << ": " << time + 1 << endl;
  }

  return 0;
}
