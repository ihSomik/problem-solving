// Shortest Routes I
// https://cses.fi/problemset/task/1671/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef pair<ll, int> pli;

void dijkstra(int n, vector<pli> adj[], int s) {
  vector<ll> dist(n + 1, LLONG_MAX);
  vector<bool> vis(n + 1, false);
  dist[s] = 0;

  // min-heap
  priority_queue<pli, vector<pli>, greater<pli>> pq;
  pq.push({0, s});  // {distance, node}

  while (!pq.empty()) {
    int u = pq.top().second;
    pq.pop();

    if (vis[u]) continue;
    vis[u] = true;

    for (auto& neighbour : adj[u]) {
      int v = neighbour.first;
      int w = neighbour.second;

      // relaxation
      if (!vis[v] && dist[u] + w < dist[v]) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }

  for (int i = 1; i <= n; i++) cout << dist[i] << " ";

  cout << endl;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<pli> adj[n + 1];

  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
  }

  dijkstra(n, adj, 1);  // 1 is the source node

  return 0;
}
