#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r, c;
    cin >> r >> c;

    long long n = ((r - 1) / 2) * 5 + c;

    if (r & 1)
        cout << 2 * (n - 1) << endl;  // n-th even number (from 0)
    else
        cout << 2 * n - 1 << endl;  // n-th odd number
}
