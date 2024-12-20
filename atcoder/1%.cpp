#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int count(0);
    long long p = 100;

    while (p < x) {
        p += p / 100;
        count++;
    }
    cout << count << endl;
    return 0;
}
