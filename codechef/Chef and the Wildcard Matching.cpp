#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int flag(0);
        for (int i = 0; i < x.length(); i++) {
            if (x[i] != y[i] && x[i] != '?' && y[i] != '?') {
                flag = 1;
                break;
            }
        }
        cout << ((flag == 0) ? "Yes" : "No") << endl;
    }

    return 0;
}
