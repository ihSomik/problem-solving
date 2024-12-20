#include <iostream>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    int mod = 1000000007;
    long long result = 1;
    while (n > 0) {
        if (n & 1)
            result = (result * m) % mod;
        m = (m * m) % mod;
        n /= 2;
    }
    cout << result << endl;
    return 0;
}
