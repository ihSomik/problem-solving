#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int quickestWayUp(vector<pii>& ladders, vector<pii>& snakes) {
  vector<int> board(101, -1);

  for (auto& ladder : ladders) board[ladder.first] = ladder.second;
  for (auto& snake : snakes) board[snake.first] = snake.second;

  // BFS to find the shortest path to square 100
  queue<int> q;
  // dist[i] stores the rolls needed to reach square i
  vector<int> dist(101, -1);

  q.push(1);
  dist[1] = 0;

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    for (int dice = 1; dice <= 6; dice++) {
      int next = current + dice;
      if (next <= 100) {
        if (board[next] != -1) next = board[next];

        if (dist[next] == -1) {
          dist[next] = dist[current] + 1;
          q.push(next);

          if (next == 100) return dist[next];
        }
      }
    }
  }

  return -1;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<pii> ladders(n);
    for (int i = 0; i < n; ++i) cin >> ladders[i].first >> ladders[i].second;

    int m;
    cin >> m;

    vector<pii> snakes(m);
    for (int i = 0; i < m; ++i) cin >> snakes[i].first >> snakes[i].second;

    cout << quickestWayUp(ladders, snakes) << endl;
  }

  return 0;
}
