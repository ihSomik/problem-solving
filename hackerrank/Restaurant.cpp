#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, b;
        cin >> l >> b;

        int gcd = __gcd(l, b);  // length of the largest square is the gcd of l and b
        int squares = (l * b) / (gcd * gcd);

        cout << squares << endl;
    }
}
