// https://dimikoj.com/problems/38/diamond-kingdom
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << m;
            if (j != i) cout << ' ';
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << m;
            if (j != i - 1) cout << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}