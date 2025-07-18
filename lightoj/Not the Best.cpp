#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

const int MAXN = 5001;
vector<pii> adj[MAXN];
int dist1[MAXN],
    dist2[MAXN];  // dist1 is the shortest, dist2 is the second shortest

void dijkstra(int n, int source) {
  priority_queue<pii, vector<pii>, greater<pii>> pq;

  for (int i = 1; i <= n; i++) dist1[i] = dist2[i] = INT_MAX;

  dist1[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {
    int cost = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if (cost > dist2[u]) continue;

    for (auto e : adj[u]) {
      int v = e.first, w = e.second;
      int newDist = cost + w;

      if (newDist < dist1[v]) {
        dist2[v] = dist1[v];
        dist1[v] = newDist;
        pq.push({newDist, v});
      } else if (newDist > dist1[v] && newDist < dist2[v]) {
        dist2[v] = newDist;
        pq.push({newDist, v});
      }
    }
  }
}

int main() {
  fastread();

  int t, tc = 1;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++) adj[i].clear();

    while (m--) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
    }

    dijkstra(n, 1);

    cout << "Case " << tc++ << ": " << dist2[n] << endl;
  }

  return 0;
}
