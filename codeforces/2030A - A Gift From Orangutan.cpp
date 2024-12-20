#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int minEle = INT_MAX, maxEle = INT_MIN;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        minEle = min(minEle, t);
        maxEle = max(maxEle, t);
    }
    cout << (n - 1) * (maxEle - minEle) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}