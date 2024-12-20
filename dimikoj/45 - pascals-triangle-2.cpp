// https://dimikoj.com/problems/45/pascals-triangle-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

ll a[55][55];

void pascal() {
    int n = 55;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
}

void solve() {
    int n;
    cin >> n;
    n++;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j];
            if (j != i) cout << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // fastread();
    pascal();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
