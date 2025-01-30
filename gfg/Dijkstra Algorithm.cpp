typedef pair<int, int> pii;
typedef vector<pii> vii;
bool vis[1001];

class Solution {
 public:
  vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
    int V = adj.size();
    vector<int> dist(V, INT_MAX);
    for (int i = 0; i < 1001; i++) vis[i] = false;
    priority_queue<pii, vii, greater<pii>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
      int u = pq.top().second;
      pq.pop();

      if (vis[u]) continue;
      vis[u] = true;

      for (auto &edge : adj[u]) {
        int v = edge.first;
        int weight = edge.second;

        if (!vis[v] && dist[u] + weight < dist[v]) {
          dist[v] = dist[u] + weight;
          pq.push({dist[v], v});
        }
      }
    }
    return dist;
  }
};
