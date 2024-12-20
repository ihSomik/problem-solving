// Coin Piles
// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 and (min(a, b) * 2 >= max(a, b)))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}