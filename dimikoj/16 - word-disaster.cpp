// https://dimikoj.com/problems/16/word-disaster
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    getline(cin, s);

    int len = s.length();
    int start = 0;

    for (int i = 0; i <= len; ++i) {
        if (s[i] == ' ' || s[i] == '\0') {
            for (int j = i - 1; j >= start; --j)
                cout << s[j];
            if (s[i] != '\0')
                cout << " ";
            start = i + 1;
        }
    }
    cout << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}