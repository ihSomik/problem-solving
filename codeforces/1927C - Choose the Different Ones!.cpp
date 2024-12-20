#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    bool A[1000000] = {false}, B[1000000] = {false};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        A[a[i]] = true;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        B[b[i]] = true;
    }

    int countA(0), countB(0);
    for (int i = 1; i <= k; i++) {
        if (A[i] == true || B[i] == true) {
            if (A[i] == true)
                countA++;
            if (B[i] == true)
                countB++;
        } else {
            cout << "NO" << endl;
            return;
        }
    }

    if (countA >= k / 2 && countB >= k / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        solve();
}