#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int l2r(0), r2l(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) l2r += a[i][j];
            if (i + j == n - 1) r2l += a[i][j];
        }
    }

    cout << abs(l2r - r2l) << endl;
}