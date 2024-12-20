#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c < 22)
        cout << "win" << endl;
    else
        cout << "bust" << endl;
    return 0;
}
