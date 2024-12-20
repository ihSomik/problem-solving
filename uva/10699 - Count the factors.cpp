#include <bits/stdc++.h>
using namespace std;

int countPrimeFactors(int n) {
    if (n < 2)
        return 0;

    int count(0);

    if (!(n & 1)) {
        count++;
        while (!(n & 1))
            n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 2)
        count++;

    return count;
}

int main() {
    int t = 1;
    // cin>>t;
    while (t) {
        int n;
        cin >> n;
        if (!n)
            return 0;
        else
            cout << n << " : " << countPrimeFactors(n) << endl;
    }
}
