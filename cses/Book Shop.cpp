// Book Shop
// https://cses.fi/priceoblemset/task/1158
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n, x;
    cin >> n >> x;
    int price[n];
    int pages[n];
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) cin >> pages[i];

    vector<int> dp(x + 1);

    for (int i = 0; i < n; i++)
        for (int j = x; j >= price[i]; j--)
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);

    cout << dp[x] << endl;
}

int main() {
    // fastread();
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
