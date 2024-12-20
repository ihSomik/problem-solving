// https://dimikoj.com/problems/4/divisor
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

int main() {
    fastread();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;

        cout << "Case " << i << ": ";

        for (int i = 1; i < n; i++)
            if (n % i == 0) cout << i << " ";
        cout << n;

        cout << endl;
    }
}