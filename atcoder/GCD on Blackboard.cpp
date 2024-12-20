#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> gcdLeft(n);
    gcdLeft[0] = a[0];
    for (int i = 1; i < n; i++)
        gcdLeft[i] = __gcd(gcdLeft[i - 1], a[i]);

    vector<int> gcdRight(n);
    gcdRight[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        gcdRight[i] = __gcd(gcdRight[i + 1], a[i]);

    int maxGcd = max(gcdRight[1], gcdLeft[n - 2]);
    for (int i = 1; i < n - 1; i++)
        maxGcd = max(maxGcd, __gcd(gcdLeft[i - 1], gcdRight[i + 1]));

    cout << maxGcd << endl;

    return 0;
}
