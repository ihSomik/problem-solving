// wrong answer on test 9
// Maximum Subarray Sum
// https://www.cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n;
    cin >> n;
    ll a[n];
    ll maxA = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxA = max(maxA, a[i]);
    }
 
    ll c[n];  // cumulative sum
    c[0] = a[0];
    ll maxC = c[0];
    ll minC = 0;
    int j = 0;
 
    for (int i = 1; i < n; i++) {
        c[i] = c[i - 1] + a[i];
        if (c[i] > maxC) {
            maxC = c[i];
            j = i;
        }
    }
 
    for (int i = j - 1; i >= 0; i--) minC = min(minC, c[i]);
 
    if (maxC == minC) {
        cout << maxC << endl;
        return 0;
    }
 
    if (maxC - minC < maxA) {
        cout << maxA << endl;
        return 0;
    }
 
    cout << maxC - minC << endl;  // sum of the elements from i to j = c[j] - c[i-1]  (where j>i)
}
