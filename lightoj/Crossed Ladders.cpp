#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    double x, y, h;
    cin >> x >> y >> h;

    double l = 0, r = min(x, y), d;
    int n = 60;
    while (n--) {
      double mid = l + (r - l) / 2;
      d = mid;

      double h1 = sqrt((x * x) - (d * d));
      double h2 = sqrt((y * y) - (d * d));
      double newH = (h1 * h2) / (h1 + h2);

      if (newH < h)
        r = mid;
      else
        l = mid;
    }
    cout << "Case " << tc << ": " << fixed << setprecision(10) << d << endl;
  }
  return 0;
}