#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 21;
int n, m, x, y;
int cnt;
char grid[N][N];
bool visited[N][N];

void dfs(int x, int y) {
  visited[x][y] = 1;
  cnt++;

  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  for (int i = 0; i < 4; i++) {
    int xN = x + dx[i];
    int yN = y + dy[i];

    if (xN >= 0 && xN < n && yN >= 0 && yN < m && !visited[xN][yN] &&
        grid[xN][yN] == '.')
      dfs(xN, yN);
  }
}

int main() {
  fastread();

  int t;
  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    memset(visited, false, sizeof(visited));
    cnt = 0;

    cin >> m >> n;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> grid[i][j];
        if (grid[i][j] == '@') {
          x = i;
          y = j;
        }
      }
    }

    dfs(x, y);

    cout << "Case " << tc << ": " << cnt << endl;
  }

  return 0;
}
