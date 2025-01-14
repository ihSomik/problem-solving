#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int N = 1e6;
bool visited[N];
vector<int> adj[N];

void dfs(int u) {
  visited[u] = true;
  for (int v : adj[u])
    if (!visited[v]) dfs(v);
}

int main() {
  fastread();

  int n, e;
  cin >> n >> e;
  while (e--) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int count(0);
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dfs(i);
      count++;
    }
  }

  cout << count << endl;
}