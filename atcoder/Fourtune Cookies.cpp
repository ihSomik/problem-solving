#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b) == (c + d) || (a + c) == (b + d) || (a + d) == (c + b) || a == (b + c + d) || b == (a + c + d) || c == (a + b + d) || d == (a + b + c))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
