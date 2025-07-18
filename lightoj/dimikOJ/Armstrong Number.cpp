// https://dimikoj.com/problems/27/armstrong-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  int n;
  cin >> n;

  int t = n;
  ll sum(0);
  while (t) {
    int rem = t % 10;
    sum += rem * rem * rem;
    t /= 10;
  }

  if (sum == n)
    cout << n << " is an armstrong number!" << endl;
  else
    cout << n << " is not an armstrong number!" << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}