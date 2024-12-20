#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int m, n;
  cin >> m >> n;

  priority_queue<int> pq;

  while (m--) {
    int x;
    cin >> x;
    pq.push(x);
  }

  ll sum(0);
  while (n--) {
    int x = pq.top();
    pq.pop();
    sum += x;
    x--;
    pq.push(x);
  }
  cout << sum << endl;
}