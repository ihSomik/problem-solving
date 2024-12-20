#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int max_points(0);
        for (int i = 0; i < n; i++) {
            if ((20 * a[i] - 10 * b[i]) > max_points)
                max_points = 20 * a[i] - 10 * b[i];
        }

        cout << max_points << endl;
    }
    return 0;
}
