// Missing Coin Sum
// https://www.cses.fi/problemset/task/2183
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) cin >> x[i];

    sort(x, x + n);

    ll sum(0);
    for (int i = 0; i < n; i++) {
        if (x[i] - sum > 1) {  // 0 to sum values can be created using x[0] to x[i-1] coins
            cout << sum + 1 << endl;
            return 0;
        }
        sum += x[i];
    }
    cout << sum + 1 << endl;
}