#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int min_price = min(n * a, b);
    cout << min_price << endl;
    return 0;
}
