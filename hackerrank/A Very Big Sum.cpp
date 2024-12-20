#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    ll sum(0);
    while (n--) {
        ll t;
        cin >> t;
        sum += t;
    }
    cout << sum << endl;
}