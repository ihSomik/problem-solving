#include <iostream>
using namespace std;

int main() {
    int r, d, x;
    cin >> r >> d >> x;
    int y;
    int count = 10;
    while (count--) {
        y = r * x - d;
        cout << y << endl;
        x = y;
    }
    return 0;
}
