#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n;
  cin >> n;
  priority_queue<int> pq;
  while (n--) {
    int a;
    cin >> a;
    pq.push(a);
    if (pq.size() >= 3) {
      int t1 = pq.top();
      pq.pop();
      int t2 = pq.top();
      pq.pop();
      int t3 = pq.top();
      pq.pop();

      pq.push(t1);
      pq.push(t2);
      pq.push(t3);

      cout << (ll)t1 * t2 * t3 << endl;
    } else
      cout << -1 << endl;
  }
}