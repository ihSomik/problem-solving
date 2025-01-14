#include <bits/stdc++.h>
using namespace std;

void bfs_shortest_reach(int n, vector<int> adjacents[], int s) {
  vector<int> distance(n + 1, -1);
  distance[s] = 0;

  queue<int> q;
  q.push(s);

  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int neighbor : adjacents[node]) {
      if (distance[neighbor] == -1) {
        distance[neighbor] = distance[node] + 6;
        q.push(neighbor);
      }
    }
  }

  for (int i = 1; i <= n; i++)
    if (i != s) cout << distance[i] << " ";

  cout << endl;
}

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n, m;
    cin >> n >> m;

    vector<int> adjacents[n + 1];
    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adjacents[u].push_back(v);
      adjacents[v].push_back(u);
    }

    int s;
    cin >> s;

    bfs_shortest_reach(n, adjacents, s);
  }
}
