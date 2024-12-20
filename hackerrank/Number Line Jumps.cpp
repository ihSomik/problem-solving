#include <iostream>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    /*
    they will meet at the same position if,
    x1 + n * v1 = x2 + n * v2
    n * (v1 - v2) = x2 - x1
    */

    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
