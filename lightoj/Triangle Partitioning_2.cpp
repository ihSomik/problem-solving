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

    // AD / AB = AE / AC = DE / BC ——————— (1)
    // △ADE / △ABC = (AD / AB)^2 = (AE / AC)^2 = (DE / BC)^2 —————— (2)
    // From (2) we get,
    // △ADE / △ABC = (AD / AB)^2
    // AD = sqrt (△ ADE / △ ABC) * AB
    // AD = sqrt(r / (1 + r)) * AB

    cout << "Case " << tc << ": " << fixed << setprecision(10)
         << sqrt(r / (1 + r)) * ab << endl;
  }
  return 0;
}