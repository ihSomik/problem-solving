// https://dimikoj.com/problems/22/prime-number
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (!(n & 1) || !(n % 3))
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2)))
            return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int count(0);
        for (int i = a; i <= b; i++)
            if (check_prime(i))
                count++;

        cout << count << endl;
    }

    return 0;
}
