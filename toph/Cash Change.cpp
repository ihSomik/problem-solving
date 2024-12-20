#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int N;
  cin >> N;

  vector<int> coins = {500, 100, 50, 10, 5, 1};
  vector<int> result;

  for (int c : coins) {
    while (N >= c) {
      result.push_back(c);
      N -= c;
    }
  }

  reverse(result.begin(), result.end());
  for (int note : result) cout << note << " ";

  cout << endl;

  return 0;
}
