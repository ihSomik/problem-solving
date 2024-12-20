#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) {
        int val = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > val) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = val;
    }
    for (int t = 0; t < n; t++) cout << a[t] << ' ';
    cout << endl;
}