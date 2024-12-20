#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        int n, total_dust = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 0)
                total_dust += a[i];
        }
        cout << "Case " << j << ": " << total_dust << endl;
    }
    return 0;
}
