#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

const int MAX_N = 101;
const int MAX_W = 100001;
ll memo[MAX_N][MAX_W];
ll weights[MAX_N], values[MAX_N];

ll knapsack(int i, int w) {
  if (i == 0 || w == 0) return 0;

  if (memo[i][w] != -1) return memo[i][w];

  if (weights[i] > w) return memo[i][w] = knapsack(i - 1, w);

  ll exclude = knapsack(i - 1, w);  // exclude current item
  ll include =
      knapsack(i - 1, w - weights[i]) + values[i];  // include current item

  return memo[i][w] = max(exclude, include);
}

int main() {
  fastread();
  int n, w;
  cin >> n >> w;

  for (int i = 1; i <= n; i++) cin >> weights[i] >> values[i];

  memset(memo, -1, sizeof(memo));

  cout << knapsack(n, w) << endl;

  return 0;
}
