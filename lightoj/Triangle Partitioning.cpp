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
    double ab, ac, bc, r;
    cin >> ab >> ac >> bc >> r;

    // ad/ab = ae/ac = de/bc

    double l = 0, h = ab, ad;  // maximum length of ad can be equal to ab
    int n = 60;
    while (n--) {
      double mid = l + (h - l) / 2;
      ad = mid;

      double ae = ac * ad / ab;
      double de = bc * ad / ab;
      double s1 = (ad + de + ae) / 2;
      double s2 = (ab + bc + ac) / 2;
      double aADE =
          sqrt(s1 * (s1 - ad) * (s1 - de) * (s1 - ae));  // area of ADE
      double aABC =
          sqrt(s2 * (s2 - ab) * (s2 - bc) * (s2 - ac));  // area of ABC
      double ratio = aADE / (aABC - aADE);               // ratio of ADE/BDEC

      if (ratio > r)
        h = mid;
      else
        l = mid;
    }
    cout << "Case " << tc << ": " << fixed << setprecision(7) << ad << endl;
  }
  return 0;
}