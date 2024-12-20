#include <bits/stdc++.h>
using namespace std;

int main() {
    double l, v1, v2;
    cin >> l >> v1 >> v2;
    int q;
    cin >> q;
    while (q--) {
        double a;
        cin >> a;
        cout << fixed << setprecision(9) << sqrt(2) * (l - sqrt(a)) / abs(v1 - v2) << endl;
    }
}
