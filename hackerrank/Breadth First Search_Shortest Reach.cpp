#include <bits/stdc++.h>
using namespace std;

void bfs_shortest_reach(int n, vector<pair<int, int>>& edges, int s) {
    vector<vector<int>> graph(n + 1);
    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> distance(n + 1, -1);
    distance[s] = 0;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[node] + 6;
                q.push(neighbor);
            }
        }
    }

    for (int i = 1; i <= n; ++i)
        if (i != s) cout << distance[i] << " ";

    cout << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> edges(m);
        for (int i = 0; i < m; ++i) cin >> edges[i].first >> edges[i].second;

        int s;
        cin >> s;

        bfs_shortest_reach(n, edges, s);
    }
}
