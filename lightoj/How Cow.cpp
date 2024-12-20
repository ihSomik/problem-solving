#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << "Case " << i << ":" << endl;

        int m;
        cin >> m;

        while (m--) {
            int x, y;
            cin >> x >> y;
            if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
