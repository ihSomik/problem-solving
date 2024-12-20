// https://dimikoj.com/problems/15/character-count
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    cin >> s;
    int len = s.length();

    int a[26] = {0};
    for (int i = 0; i < len; i++)
        a[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (a[i]) {
            char temp = 'a' + i;
            cout << temp << " = " << a[i] << endl;
        }
    cout << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}