// https://dimikoj.com/problems/13/tomi-mias-probability
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

ll factorial(int n) {
    ll ans = 1;
    for (int i = n; i > 0; i--)
        ans *= i;
    return ans;
}

void solve() {
    string str, word;
    getline(cin, str);

    map<string, int> mp;
    int n = 0;
    stringstream ss(str);
    while (ss >> word) {
        mp[word]++;
        n++;
    }

    map<string, int>::iterator it;
    ll count = 1;
    for (it = mp.begin(); it != mp.end(); it++)
        if (it->second > 1)
            count *= factorial(it->second);

    ll ans = factorial(n) / count;

    cout << "1/" << ans << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) solve();
}