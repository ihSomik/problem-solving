#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

void dijkstra(int n, vector<pii> adjacents[], int s) {
  vector<int> distance(n + 1, INT_MAX);
  vector<bool> visited(n + 1, false);
  distance[s] = 0;

  // min-heap
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, s});

  while (!pq.empty()) {
    int u = pq.top().second;
    int d = pq.top().first;
    pq.pop();

    if (visited[u]) continue;
    visited[u] = true;

    for (auto& neighbor : adjacents[u]) {
      int v = neighbor.first;
      int w = neighbor.second;

      // Relaxation
      if (!visited[v] && distance[u] + w < distance[v]) {
        distance[v] = distance[u] + w;
        pq.push({distance[v], v});
      }
    }
  }

  for (int i = 1; i <= n; i++)
    if (i != s) cout << (distance[i] == INT_MAX ? -1 : distance[i]) << " ";

  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<pii> adjacents[n + 1];

    for (int i = 0; i < m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      adjacents[u].push_back({v, w});
      adjacents[v].push_back({u, w});
    }

    int s;
    cin >> s;

    dijkstra(n, adjacents, s);
  }

  return 0;
}
