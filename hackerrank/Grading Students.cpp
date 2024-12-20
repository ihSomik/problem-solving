#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int r;
        cin >> r;
        if (r < 38)
            cout << r << endl;
        else if ((r + 1) % 5 == 0 || (r + 2) % 5 == 0)
            cout << (r / 5 + 1) * 5 << endl;
        else
            cout << r << endl;
    }
}
