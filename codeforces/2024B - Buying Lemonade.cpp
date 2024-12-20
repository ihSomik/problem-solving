#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve() {
    ll n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    ll preSum(0), totalSum, countPress;
    for (int i = 0; i < n; i++) {
        totalSum = a[i] * (n - i) + preSum;  // the error was due to writing totalSum += a[i] * (n - i) + preSum initially
        preSum += a[i];

        if (totalSum >= k) {
            countPress = k + i;
            break;
        }
    }
    cout << countPress << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) solve();
}