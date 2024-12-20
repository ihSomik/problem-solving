#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (!(a & 1))
        a++;

    long long sum = 0;
    for (; a <= b; a += 2)
        sum += a;

    cout << sum << endl;

    return 0;
}
