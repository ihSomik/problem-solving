typedef pair<int, int> pii;

class Solution {
 public:
  int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                        int K) {
    vector<vector<pii>> adj(n);  // {neighbor, cost}

    for (auto& f : flights) adj[f[0]].push_back({f[1], f[2]});

    // min-heap: {cost, city, stops}
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({0, src, 0});

    vector<int> bestCost(n, INT_MAX);
    vector<int> bestSteps(n, INT_MAX);
    bestCost[src] = 0;
    bestSteps[src] = 0;

    while (!pq.empty()) {
      auto top = pq.top();
      pq.pop();
      int cost = top[0], u = top[1], stops = top[2];

      if (u == dst) return cost;  // if reached the destination

      if (stops > K) continue;

      for (auto& edge : adj[u]) {
        int v = edge.first, price = edge.second;
        if (cost + price < bestCost[v] || stops + 1 < bestSteps[v]) {
          bestCost[v] = cost + price;
          bestSteps[v] = stops + 1;
          pq.push({cost + price, v, stops + 1});
        }
      }
    }

    return -1;
  }
};