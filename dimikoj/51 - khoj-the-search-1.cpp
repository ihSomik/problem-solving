// https://dimikoj.com/problems/51/khoj-the-search-1
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int len1 = s1.length();
    int len2 = s2.length();
    int i, j;

    for (i = 0; i <= len1 - len2; i++) {
        if (s2[0] == s1[i]) {
            for (j = 1; j < len2; j++)
                if (s2[j] != s1[i + j]) break;

            if (j == len2) {
                cout << i << endl;
                return;
            }
        }
    }
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}
