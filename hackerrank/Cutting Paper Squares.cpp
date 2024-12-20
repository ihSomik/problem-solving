#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    // number of horizontal cuts = n-1
    // number of vertical cuts = n * (m - 1)
    cout << n * m - 1 << endl;
}
