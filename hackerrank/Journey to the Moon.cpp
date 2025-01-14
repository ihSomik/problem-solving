#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll journeyToMoon(int n, vector<int> adj[]) {
  vector<bool> visited(n, false);
  vector<int> groupSizes;

  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      int groupSize = 0;  // number of astronauts from the same country
      queue<int> q;
      q.push(i);
      visited[i] = true;

      while (!q.empty()) {
        int node = q.front();
        q.pop();
        groupSize++;

        for (int neighbor : adj[node]) {
          if (!visited[neighbor]) {
            visited[neighbor] = true;
            q.push(neighbor);
          }
        }
      }

      groupSizes.push_back(groupSize);
    }
  }

  ll totalPairs = (1LL * n * (n - 1)) / 2;

  // subtract invalid pairs (pairs within the same country)
  for (int groupSize : groupSizes)
    totalPairs -= (1LL * groupSize * (groupSize - 1)) / 2;

  return totalPairs;
}

int main() {
  int n, p;
  cin >> n >> p;

  vector<int> adj[n];

  for (int i = 0; i < p; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  cout << journeyToMoon(n, adj) << endl;
  return 0;
}
