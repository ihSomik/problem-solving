#include <bits/stdc++.h>
using namespace std;

void catAndMouse(int x, int y, int z) {
    if (abs(x - z) < abs(y - z))
        cout << "Cat A";
    else if (abs(x - z) > abs(y - z))
        cout << "Cat B";
    else
        cout << "Mouse C";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
        catAndMouse(x, y, z);
        cout << endl;
    }

    return 0;
}
