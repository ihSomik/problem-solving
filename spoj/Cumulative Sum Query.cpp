#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
        cin >> num[i];

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;

        int sum(0);
        for (int i = x; i <= y; i++)
            sum += num[i];
        cout << sum << endl;
    }
    return 0;
}
