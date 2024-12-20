// https://dimikoj.com/problems/5/box-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << '*';
        cout << endl;
    }

    cout << endl;
}

int main() {
    fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}