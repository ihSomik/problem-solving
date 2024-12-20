#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << (k / 2) * (k - k / 2) << endl;
    }
}
