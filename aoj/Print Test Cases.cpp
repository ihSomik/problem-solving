#include <iostream>
using namespace std;

int main() {
    int x;

    for (int i = 1; cin >> x; i++) {
        if (!x)
            break;
        else
            cout << "Case " << i << ": " << x << endl;
    }
}
