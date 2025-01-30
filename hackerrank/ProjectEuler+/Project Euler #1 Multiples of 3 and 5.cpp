#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

ll arithmeticSum(int N, int a, int d) {
  int n = (N - 1) / d;  // number of terms
  return ((ll)n * (2 * a + (n - 1) * d)) / 2;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    ll result = arithmeticSum(N, 3, 3) + arithmeticSum(N, 5, 5) -
                arithmeticSum(N, 15, 15);
    cout << result << endl;
  }
  return 0;
}
