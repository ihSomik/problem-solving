// https://dimikoj.com/problems/39/palindrome
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    string s;
    cin >> s;

    string news = s;
    reverse(s.begin(), s.end());
    if (s == news)
        cout << "Yes! It is palindrome!" << endl;
    else
        cout << "Sorry! It is not palindrome!" << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
