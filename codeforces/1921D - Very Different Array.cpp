#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int s1 = 0, e1 = n - 1, s2 = 0, e2 = m - 1;
    ll ans(0);
    while (s1 <= e1) {
        int d1 = abs(a[s1] - b[e2]);
        int d2 = abs(b[s2] - a[e1]);
        if (d1 >= d2) {
            ans += d1;
            s1++;
            e2--;
        } else {
            ans += d2;
            s2++;
            e1--;
        }
    }
    cout << ans << endl;
}

int main() {
    fastread();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();
}
