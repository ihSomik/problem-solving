#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n;
        long long mod = 1e9 + 7;
        cin >> n;
        // n^2-(n-1)^2 = 2n-1 (represents odd numbers)
        // sum of the first n odd numbers equals n^2
        cout << ((n % mod) * (n % mod)) % mod << endl;
    }
}
