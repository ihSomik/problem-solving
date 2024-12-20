#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool found = false;
    int start, end;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B' && !found) {
            found = true;
            start = i;
        }
        if (s[i] == 'B')
            end = i;
    }
    cout << end - start + 1 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}