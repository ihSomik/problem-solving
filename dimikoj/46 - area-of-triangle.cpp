// https://dimikoj.com/problems/46/area-of-triangle
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    double s = 0.5 * (a + b + c);
    double ans = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %.3lf\n", ans);
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
