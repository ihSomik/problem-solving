#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum(0);

        while (n--) {
            int a;
            cin >> a;
            while (a) {
                sum += (a % 10);
                a /= 10;
            }
        }
        if (!(sum % 3))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
