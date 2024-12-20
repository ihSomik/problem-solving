#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;

        int dif(0), sOne(0), fOne(0);
        for (int i = 0; i < n; i++) {
            if (s[i] != f[i])
                dif++;
            sOne += s[i] == '1';
            fOne += f[i] == '1';
        }

        cout << (dif + (abs(sOne - fOne))) / 2 << endl;
    }
}