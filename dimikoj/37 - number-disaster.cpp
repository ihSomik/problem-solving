// https://dimikoj.com/problems/37/number-disaster
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    int rev(0);
    while (n) {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    cout << rev << endl;
}
int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}