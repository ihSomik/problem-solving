#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool result = false;  // Alice and Bob can place the operators in any random order, not necessarily from first to last
    result = s[0] == '1' || s[n - 1] == '1';

    if (!result)
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '1' && s[i - 1] == '1') {
                result = true;
                break;
            }
        }

    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) solve();
}