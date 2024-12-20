// https://dimikoj.com/problems/41/sum-of-series-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    double sum(0), fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += i / fact;
    }
    printf("%.4lf\n", sum);
}
int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
