#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

void dijkstra(int n, vector<vector<pii>>& graph, int s) {
    vector<int> dist(n + 1, INT_MAX);
    dist[s] = 0;

    // min-heap priority queue
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++)
        if (i != s) cout << (dist[i] == INT_MAX ? -1 : dist[i]) << " ";

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<pii>> graph(n + 1);

        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }

        int s;
        cin >> s;

        dijkstra(n, graph, s);
    }
}
