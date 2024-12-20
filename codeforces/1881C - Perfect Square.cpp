#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    char ch[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> ch[i][j];

    ll ans(0);
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= n / 2; j++) {
            int k = n - i + 1;
            int l = n - j + 1;
            char mx = max({ch[i][j], ch[j][k], ch[k][l], ch[l][i]});  // The characters in these four positions must be the same
            ans += (mx - ch[i][j]) + (mx - ch[j][k]) + (mx - ch[k][l]) + (mx - ch[l][i]);
        }
    }
    cout << ans << endl;
}

int main() {
    fastread();

    int t;
    cin >> t;
    while (t--)
        solve();
}