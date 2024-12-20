// https://dimikoj.com/problems/35/out-of-circle
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int xc, yc, r, x, y;
    cin >> xc >> yc >> r >> x >> y;

    double d = sqrt((xc - x) * (xc - x) + (yc - y) * (yc - y));

    if (r > d)
        cout << "The point is inside the circle" << endl;
    else
        cout << "The point is not inside the circle" << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}