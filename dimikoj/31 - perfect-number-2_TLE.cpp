// https://dimikoj.com/problems/31/perfect-number-2
// tle
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;

    for (int x = 2; x <= n; x++) {
        int sq = sqrt(x);
        ll sum = 1;
        for (int i = 2; i <= sq; i++) {
            if (x % i == 0) {
                sum += i + (x / i);
                if (i == x / i) sum -= i;
            }
        }
        if (sum == x) cout << x << endl;
    }
    cout << endl;
}
int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}