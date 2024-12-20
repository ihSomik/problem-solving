// Sum of Two Values
// https://www.cses.fi/problemset/task/1640
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    map<int, int> posOfVal;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (posOfVal.find(x - val) != posOfVal.end()) {
            cout << i + 1 << ' ' << posOfVal[x - val] << endl;
            return 0;
        }
        posOfVal[val] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
}