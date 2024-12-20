#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sq = sqrt(n);
        int count(0);

        for (int i = 1; i <= sq; i++)
            if (!(n % i)) {
                if (!(i & 1)) count++;
                if (!((n / i) & 1) && i != n / i) count++;
            }
        cout << count << endl;
    }
}
