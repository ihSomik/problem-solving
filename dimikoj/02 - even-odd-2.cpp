// https://dimikoj.com/problems/2/even-odd-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s[s.length() - 1] - '0';  // last digit of the number
    if (n & 1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}

int main() {
    fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}