#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (!(n & 1) || !(n % 3))
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2)))
            return false;
    return true;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long n;
        unsigned long long num = 1;
        int count(0);
        cin >> n;

        for (int i = 2; i <= n && num * i <= n; i++) {
            if (check_prime(i)) {
                num *= i;
                count++;
            }
        }
        cout << count << endl;
    }
}
