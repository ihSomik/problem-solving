// https://dimikoj.com/problems/7/count-numbers
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    cin.ignore();
    getline(cin, s);

    int count = 1;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' && s[i + 1] != ' ')
            count++;

    cout << count << endl;
}

int main() {
    // fastread();
    int t;
    cin >> t;
    while (t--) solve();
}
