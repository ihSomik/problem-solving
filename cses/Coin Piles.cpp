// Coin Piles
// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);

    int l = 0, r = n - 1, count(0);
    while (l <= r) {
        if (p[l] + p[r] <= x) {
            l++;
            r--;
        } else
            r--;
        count++;
    }
    cout << count << endl;
}