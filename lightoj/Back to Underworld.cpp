#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int maxN = 20000;
vector<int> adj[maxN + 1];
bool visited[maxN + 1];
bool color[maxN + 1];

int bfs(int s) {
  queue<int> q;
  q.push(s);
  visited[s] = true;
  color[s] = 0;

  int count[2] = {0, 0};
  count[0]++;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v : adj[u]) {
      if (!visited[v]) {
        visited[v] = true;
        color[v] = !color[u];
        count[color[v]]++;
        q.push(v);
      }
    }
  }

  return max(count[0], count[1]);
}

int main() {
  fastread();

  int t;
  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    int n;
    cin >> n;

    for (int i = 1; i <= maxN; i++) {
      adj[i].clear();
      visited[i] = false;
    }

    for (int i = 0; i < n; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int maxMembers(0);
    for (int i = 1; i < maxN; i++)
      if (!visited[i] && !adj[i].empty()) maxMembers += bfs(i);

    cout << "Case " << tc << ": " << maxMembers << endl;
  }

  return 0;
}
