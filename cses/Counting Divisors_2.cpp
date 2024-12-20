// Counting Divisors
// https://cses.fi/problemset/task/1713
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int maxX = 1e6;
vector<int> divisor(maxX + 1, 1);

void sieve() {
    for (int i = 2; i <= maxX; i++)
        for (int j = i; j <= maxX; j += i)
            divisor[j]++;  // i is a divisor of j
}

void solve() {
    int x;
    cin >> x;
    cout << divisor[x] << endl;
}

int main() {
    // fastread();
    sieve();
    int t = 1;
    cin >> t;
    while (t--) solve();
}
