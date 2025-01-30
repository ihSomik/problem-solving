#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int n, m;
vector<pair<int, int>> adj[100001];
int dist[100001];
int parent[100001];
vector<bool> visited(100001, false);

void dijkstra() {
  priority_queue<pii, vector<pii>, greater<pii>> pq;  // min heap

  for (int i = 1; i <= n; i++) {
    dist[i] = INT_MAX;
    parent[i] = -1;
  }

  dist[1] = 0;
  pq.push({0, 1});  // {distance, node}

  while (!pq.empty()) {
    int d = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if (visited[u]) continue;
    visited[u] = true;

    for (auto edge : adj[u]) {
      int v = edge.first;
      int weight = edge.second;

      if (!visited[v] && dist[u] + weight < dist[v]) {
        dist[v] = dist[u] + weight;
        parent[v] = u;
        pq.push({dist[v], v});
      }
    }
  }

  if (dist[n] == INT_MAX) {
    cout << -1 << endl;
    return;
  }

  stack<int> path;
  int u = n;
  while (u != -1) {
    path.push(u);
    u = parent[u];
  }

  while (!path.empty()) {
    cout << path.top() << " ";
    path.pop();
  }

  cout << endl;
}

int main() {
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  dijkstra();

  return 0;
}
