#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n + 1];

        if (n % 2 == 0) {
            int x = n;
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    arr[i] = x;
                    x = x - 2;
                } else {
                    arr[i] = i;
                }
            }
        } else {
            int x = n;
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 1) {
                    arr[i] = x;
                    x = x - 2;
                } else {
                    arr[i] = i;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}