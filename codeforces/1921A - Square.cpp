#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x[4], y[4];
        for (int i = 0; i < 4; i++)
            cin >> x[i] >> y[i];

        int a, b;
        for (int i = 1; i < 4; i++) {
            if (x[0] == x[i])
                a = abs(y[0] - y[i]);
            if (y[0] == y[i])
                b = abs(x[0] - x[i]);
        }

        cout << a * b << endl;
    }
}