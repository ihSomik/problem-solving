#include <bits/stdc++.h>
using namespace std;

vector<int> parent, Rank;

// initialize Union-Find (Disjoint Set)
void initUnionFind(int n) {
  parent.resize(n + 1);
  Rank.resize(n + 1, 0);
  for (int i = 1; i <= n; i++) parent[i] = i;
}

// find the root of the node with path compression
int find(int x) {
  if (parent[x] != x) parent[x] = find(parent[x]);

  return parent[x];
}

// union by rank
bool unite(int x, int y) {
  int rootX = find(x);
  int rootY = find(y);

  if (rootX != rootY) {
    if (Rank[rootX] > Rank[rootY])
      parent[rootY] = rootX;
    else if (Rank[rootX] < Rank[rootY])
      parent[rootX] = rootY;
    else {
      parent[rootY] = rootX;
      Rank[rootX]++;
    }
    return true;
  }

  return false;
}

int kruskals(int n, vector<tuple<int, int, int>>& edges) {
  initUnionFind(n);

  int mst_weight = 0;
  for (auto& edge : edges) {
    int w, u, v;
    tie(w, u, v) = edge;

    if (unite(u, v)) mst_weight += w;
  }

  return mst_weight;
}

int main() {
  int n, e;
  cin >> n >> e;

  vector<tuple<int, int, int>> edges(e);

  for (int i = 0; i < e; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    edges[i] = {w, u, v};  // store as (weight, node1, node2)
  }

  sort(edges.begin(), edges.end());  // sort edges by weight

  cout << kruskals(n, edges) << endl;
  return 0;
}
