// Subarray Sums II
// https://www.cses.fi/problemset/task/1661/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n, x;
  cin >> n >> x;
  vector<ll> a(n);

  for (int i = 0; i < n; ++i) cin >> a[i];

  unordered_map<ll, int> preSumFreq;  // frequency of prefix sums
  preSumFreq[0] = 1;                  // base case: sum 0 has occurred once
  ll currSum = 0, cnt = 0;

  for (int i = 0; i < n; ++i) {
    currSum += a[i];
    cnt += preSumFreq[currSum - x];
    preSumFreq[currSum]++;
  }

  cout << cnt << endl;
}