// https://dimikoj.com/problems/4/divisor
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

int main() {
    fastread();

    int t = 1;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        int n;
        cin >> n;
        cout << "Case " << j << ": ";

        vector<int> small_divisors;
        vector<int> large_divisors;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                small_divisors.push_back(i);
                if (i != n / i)
                    large_divisors.push_back(n / i);
            }
        }

        bool first = true;
        for (int div : small_divisors) {
            if (!first) cout << " ";
            cout << div;
            first = false;
        }

        for (int i = large_divisors.size() - 1; i >= 0; i--)
            cout << " " << large_divisors[i];

        cout << endl;
    }
}