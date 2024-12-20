#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 100000;

int power(ll base, ll exp) {
    long long result = 1;

    while (exp) {
        if (exp & 1)
            result = (result * base) % MOD;
        exp = exp >> 1;
        base = (base * base) % MOD;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << power(2, n) - 1 << endl;
    }
}
