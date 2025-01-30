// Stick Lengths
// https://www.cses.fi/problemset/task/1074
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) cin >> p[i];

    sort(p, p + n);
    int median = p[n / 2]; 

    ll cost(0);
    for (int t : p) cost += abs(t - median);

    cout << cost << endl;
}