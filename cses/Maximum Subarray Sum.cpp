// Maximum Subarray Sum
// https://www.cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    ll sum(0), maxSum = a[0];
    for (auto x : a) {
        sum = max(x, sum + x);
        maxSum = max(sum, maxSum);
    }

    cout << maxSum << endl;
}