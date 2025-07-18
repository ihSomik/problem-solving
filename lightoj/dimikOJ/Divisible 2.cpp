#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  ll lcm = a * b;  // no lcm, just product
  // এডা কোনো কথা! একবছর ধইরা লসাগু দিয়া চেষ্টা করতাছি, আর আজকে কয় গুনফল হইলেই
  // হইবো! এই দিন দেখার জন্য বেঁচে ছিলাম।

  for (ll i = lcm; i <= c; i += lcm) {
    cout << i << '\n';
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
