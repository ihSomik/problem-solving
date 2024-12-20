#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;

int main() {
    fastread();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        cin >> n >> m;
        int a[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];

        // checking (prefix_sum[r] - prefix_sum[l-1]) % m == 0
        // if (a%m - b^%m) % m = 0 then a%m = b%m
        ll prefix_sum[n + 1];
        prefix_sum[0] = 0;
        for (int i = 1; i <= n; i++) prefix_sum[i] = (prefix_sum[i - 1] + a[i]) % m;

        map<int, int> count;
        count[0] = 1;
        ll solve(0);
        for (int r = 1; r <= n; r++) solve += count[prefix_sum[r]]++;

        cout << "Case " << tc << ": " << solve << endl;
    }
}