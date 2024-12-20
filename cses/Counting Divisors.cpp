// Counting Divisors
// https://cses.fi/problemset/task/1713
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int x;
    cin >> x;

    int sq = sqrt(x);
    int count(0);

    for (int i = 1; i <= sq; i++) {
        if (x % i == 0) {
            if (i == x / i)  // Perfect square
                count++;
            else  // Pair of divisors
                count += 2;
        }
    }

    cout << count << endl;
}

int main() {
    // fastread();
    int t = 1;
    cin >> t;
    while (t--) solve();
}
