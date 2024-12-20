// Counting Divisors
// https://cses.fi/problemset/task/1713
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

// this method involves finding the prime factors of a number and then using their exponents to calculate the number of divisors
void solve() {
    int x;
    cin >> x;

    int sq = sqrt(x);
    vector<int> powersOfPrimeFactors;

    for (int i = 2; i <= sq; i++) {
        if (x % i == 0) {
            int power(0);
            while (x % i == 0) {
                power++;
                x /= i;
            }
            powersOfPrimeFactors.push_back(power);
        }
    }
    if (x != 1) powersOfPrimeFactors.push_back(1);  // if there's a remaining prime factor

    int divisors = 1;
    for (auto n : powersOfPrimeFactors)
        divisors *= (n + 1);  // if the prime factorization of a number is A^n * B^m, the number of its divisors is (n+1) * (m+1)
    cout << divisors << endl;
}

int main() {
    // fastread();

    int t = 1;
    cin >> t;
    while (t--) solve();
}
