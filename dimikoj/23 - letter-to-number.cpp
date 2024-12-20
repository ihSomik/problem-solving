// https://dimikoj.com/problems/23/letter-to-number
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
        cout << s[i] - 'A' + 1;

    cout << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}