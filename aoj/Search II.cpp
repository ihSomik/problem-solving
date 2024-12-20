#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, bool> mp;
    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        mp[s] = true;
    }

    int q;
    cin >> q;
    int count(0);
    while (q--) {
        int t;
        cin >> t;
        if (mp[t])
            count++;
    }
    cout << count << endl;

    return 0;
}
