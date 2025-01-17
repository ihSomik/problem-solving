#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[n][3];

    for (int i = 0; i < n; i++) {
        cin >> dp[i][0];
        cin >> dp[i][1];
        cin >> dp[i][2];
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = dp[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = dp[i][2] + max(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << endl;
}