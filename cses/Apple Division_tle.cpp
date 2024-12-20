// tle
// Apple Division
// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    ll total_weight(0);

    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
        total_weight += weights[i];
    }

    int target = total_weight / 2;

    vector<bool> dp(target + 1, false);
    dp[0] = true;  // dp[j] will be true if a subset of apples can sum up to j.

    for (int w : weights)
        for (int j = target; j >= w; j--)
            dp[j] = dp[j] || dp[j - w];

    // finding the largest possible target <= target
    int largest_tar = 0;
    for (int j = target; j >= 0; j--) {
        if (dp[j]) {
            largest_tar = j;
            break;
        }
    }

    int min_diff = total_weight - 2 * largest_tar;

    cout << min_diff << endl;
}
