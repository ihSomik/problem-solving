#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 100001;
int n, m;
vector<int> adj[N];
vector<int> w(N);

void bfs(int s) {
  w[s] = 0;
  queue<int> q;
  q.push(s);

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : adj[u]) {
      if (w[v] == -1) {
        w[v] = w[u] + 1;
        q.push(v);
      }
    }
  }
}

int main() {
  fastread();

  int t;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
      adj[i].clear();
      w[i] = -1;
    }

    while (m--) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    bfs(1);

    cout << w[n] << endl;
  }

  return 0;
}
