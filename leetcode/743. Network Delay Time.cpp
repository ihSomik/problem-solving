typedef pair<int, int> pii;

class Solution {
 public:
  int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pii> adj[n + 1];  // {neighbor, time}
    vector<bool> visited(n + 1, false);

    for (auto& t : times) adj[t[0]].push_back({t[1], t[2]});

    vector<int> dist(n + 1, INT_MAX);
    dist[k] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;

    pq.push({0, k});  // {distance, node}

    while (!pq.empty()) {
      // int d = pq.top().first;
      int u = pq.top().second;
      pq.pop();

      if (visited[u]) continue;
      visited[u] = true;

      for (auto& edge : adj[u]) {
        int v = edge.first;
        int weight = edge.second;

        if (!visited[v] && dist[u] + weight < dist[v]) {
          dist[v] = dist[u] + weight;
          pq.push({dist[v], v});
        }
      }
    }

    int maxTime = 0;
    for (int i = 1; i <= n; i++) {
      if (dist[i] == INT_MAX) return -1;
      maxTime = max(maxTime, dist[i]);
    }

    return maxTime;
  }
};
