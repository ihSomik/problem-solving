#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (n--) {
    int a;
    cin >> a;
    pq.push(a);
  }

  ll cost(0);
  while (pq.size() > 1) {
    int t1 = pq.top();
    pq.pop();
    int t2 = pq.top();
    pq.pop();
    cost += (ll)t1 + t2;
    pq.push(t1 + t2);
  }
  cout << cost << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}