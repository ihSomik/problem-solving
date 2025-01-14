#include <bits/stdc++.h>
using namespace std;

const int N = 26;
bool visited[N];
vector<int> adj[N];

void dfs(int node) {
  visited[node] = true;
  for (int neighbor : adj[node])
    if (!visited[neighbor]) dfs(neighbor);
}

int main() {
  int t;
  cin >> t;
  cin.ignore();

  bool firstCase = true;
  while (t--) {
    if (!firstCase) cout << endl;
    firstCase = false;

    char c;
    cin >> c;
    int n = c - 'A' + 1;
    cin.ignore();

    for (int i = 0; i < N; i++) adj[i].clear();
    memset(visited, false, sizeof(visited));

    string edge;
    while (getline(cin, edge)) {
      if (edge.empty()) break;

      int u = edge[0] - 'A';
      int v = edge[1] - 'A';
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int count(0);
    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        dfs(i);
        count++;
      }
    }

    cout << count << endl;
  }
}
