// https://dimikoj.com/problems/36/sorting-words
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n; i++) cout << a[i] << endl;
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--) solve();
}