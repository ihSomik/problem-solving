#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n;
  cin >> n;

  unordered_map<int, int> count;
  int maxCount = INT_MIN;

  while (n--) {
    int a;
    cin >> a;
    count[a]++;
    maxCount = max(maxCount, count[a]);
  }
  cout << maxCount << endl;
}