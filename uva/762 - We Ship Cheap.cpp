#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

map<string, vector<string>> adj;
map<string, string> parent;
map<string, int> dist;

void bfs(string s) {
  dist[s] = 1;
  queue<string> q;
  q.push(s);

  while (!q.empty()) {
    string u = q.front();
    q.pop();

    for (string v : adj[u]) {
      if (dist[v] == 0) {
        dist[v] = dist[u] + 1;
        q.push(v);
        parent[v] = u;
      }
    }
  }
}

int main() {
  fastread();

  int n;
  bool firstTC = true;
  while (cin >> n) {
    if (!firstTC) cout << endl;
    firstTC = false;

    adj.clear();
    parent.clear();
    dist.clear();

    for (int i = 0; i < n; i++) {
      string u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    string s, d;
    cin >> s >> d;
    bfs(s);

    if (parent[d].empty()) {
      cout << "No route" << endl;
      continue;
    }

    vector<pair<string, string>> route;
    while (!parent[d].empty()) {
      route.push_back({parent[d], d});
      d = parent[d];
    }

    reverse(route.begin(), route.end());
    for (auto r : route) cout << r.first << ' ' << r.second << endl;
  }
  return 0;
}
