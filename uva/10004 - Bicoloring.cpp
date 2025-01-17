#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 200;
vector<int> adj[N];
int color[N];

bool isBipartite(int s) {
  color[s] = 0;
  queue<int> q;
  q.push(s);

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : adj[u]) {
      if (color[v] == -1) {
        color[v] = 1 - color[u];
        q.push(v);
      } else if (color[v] == color[u])
        return false;
    }
  }
  return true;
}

int main() {
  fastread();

  int n, m;
  while (cin >> n) {
    if (n == 0) break;
    memset(color, -1, sizeof(color));
    for (int i = 0; i < n; i++) adj[i].clear();

    cin >> m;
    while (m--) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    if (isBipartite(0))
      cout << "BICOLORABLE." << endl;
    else
      cout << "NOT BICOLORABLE." << endl;
  }

  return 0;
}
