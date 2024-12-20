#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, n;
    cin >> v >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == v) {
            cout << i << endl;
            return 0;
        }
    }
}