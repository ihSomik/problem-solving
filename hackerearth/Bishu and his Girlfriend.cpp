#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 1001;
int n, m;
vector<int> adj[N];
int dist[N];

void bfs(int s) {
  dist[s] = 0;
  queue<int> q;
  q.push(s);

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : adj[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }
}

int main() {
  fastread();

  cin >> n;
  m = n - 1;

  memset(dist, -1, sizeof(dist));

  while (m--) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  bfs(1);

  int q;
  cin >> q;
  int minDist = 10000, minNode;
  while (q--) {
    int u;
    cin >> u;

    if (dist[u] <= minDist) {
      minDist = dist[u];
      minNode = min(minNode, u);
    }
  }

  cout << minNode << endl;

  return 0;
}
