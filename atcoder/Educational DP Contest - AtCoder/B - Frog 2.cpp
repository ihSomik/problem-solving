#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    vector<int> dp(n);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        dp[i] = INT_MAX;
        for (int j = i - 1; j >= 0 && i - j <= k; j--)
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
    }

    cout << dp[n - 1] << endl;
}