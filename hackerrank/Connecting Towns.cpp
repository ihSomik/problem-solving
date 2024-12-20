#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, routes = 1;
        cin >> n;
        n--;

        while (n--) {
            int temp;
            cin >> temp;
            routes = (routes * temp) % 1234567;
        }
        cout << routes << endl;
    }
}
