// https://dimikoj.com/problems/29/character-recognition
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase Character" << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase Character" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "Numerical Digit" << endl;
    else
        cout << "Special Characters" << endl;  // giving WA for the output "Special Character"
}
int main() {
    // fastread();
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}