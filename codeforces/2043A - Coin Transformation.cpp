#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    int count = 0;
    while (n > 3) {
      n /= 4;
      count++;
    }

    int ans = pow(2, count);

    cout << ans << endl;
  }
}