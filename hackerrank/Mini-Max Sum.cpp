#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];

    ll sum(0);
    int maxEle = INT_MIN, minEle = INT_MAX;
    for (int t : a) {
        sum += t;
        maxEle = max(maxEle, t);
        minEle = min(minEle, t);
    }
    cout << sum - maxEle << ' ' << sum - minEle << endl;
}
