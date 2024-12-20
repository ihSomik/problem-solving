#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double n;
    cin >> n;

    int k = n, pos(0), neg(0), zeros(0);
    while (k--) {
        int t;
        cin >> t;
        if (t > 0)
            pos++;
        else if (t < 0)
            neg++;
        else
            zeros++;
    }
    cout << fixed << setprecision(6) << pos / n << endl
         << neg / n << endl
         << zeros / n << endl;
}