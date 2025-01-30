#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int q;
  cin >> q;

  deque<pair<ll, ll>> dq;  // {head, length}
  ll offset = 0;  // offset to keep track of the head of the first segment

  while (q--) {
    int type;
    cin >> type;

    if (type == 1) {
      ll length;
      cin >> length;
      if (dq.empty())
        dq.push_back({0, length});
      else {
        ll lastHead = dq.back().first;
        ll lastLength = dq.back().second;
        dq.push_back({lastHead + lastLength, length});
      }
    } else if (type == 2) {
      ll removedLength = dq.front().second;
      dq.pop_front();
      offset += removedLength;
    } else if (type == 3) {
      int k;
      cin >> k;
      ll headCoordinate = dq[k - 1].first - offset;
      cout << headCoordinate << endl;
    }
  }

  return 0;
}
