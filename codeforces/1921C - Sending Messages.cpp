#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        long long m[n];
        for (int i = 0; i < n; i++)
            cin >> m[i];

        f -= min(m[0] * a, b);

        for (int i = 1; i < n && f > 0; i++)
            f -= min((m[i] - m[i - 1]) * a, b);

        if (f <= 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}