#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
const double eps = 1e-15;

int main() {
  int t;
  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    double newL, L, n, c, h;
    cin >> L >> n >> c;

    newL = (1 + n * c) * L;

    double left = 0, right = PI;
    while (left <= right) {
      double mid = (left + right) / 2;
      double r = newL / mid;
      double d = r * sin(mid / 2);

      if (abs(d - (L / 2)) < eps) {
        h = r - r * cos(mid / 2);
        break;
      }
      if (d > (L / 2))
        left = mid;
      else
        right = mid;
    }

    cout << "Case " << tc << ": " << fixed << setprecision(8) << h << endl;
  }

  return 0;
}