#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
typedef long long int ll;
typedef unsigned long long ull;
#define endl '\n'

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int count(0), moves(0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            count = 0;
        else {
            count++;
            if (count == m) {
                moves++;
                count = 0;
                i += k - 1;
            }
        }
    }
    cout << moves << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) solve();
}