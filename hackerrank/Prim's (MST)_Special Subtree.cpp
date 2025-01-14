#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int prims(int n, vector<pii> adj[], int s) {
  vector<bool> visited(n + 1, false);
  priority_queue<pii, vector<pii>, greater<pii>> pq;

  int mst_weight = 0;

  pq.push({0, s});  // min-heap {weight, node}

  while (!pq.empty()) {
    int weight, u;
    tie(weight, u) = pq.top();
    pq.pop();

    if (visited[u]) continue;

    visited[u] = true;
    mst_weight += weight;

    for (const auto& edge : adj[u]) {
      int v = edge.first;
      int w = edge.second;
      if (!visited[v]) pq.push({w, v});
    }
  }

  return mst_weight;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<pii> adj[n + 1];

  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  int s;
  cin >> s;

  cout << prims(n, adj, s) << endl;

  return 0;
}
