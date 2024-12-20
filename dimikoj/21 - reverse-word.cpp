// https://dimikoj.com/problems/21/reverse-word
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}