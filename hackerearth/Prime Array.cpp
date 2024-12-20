#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
typedef long long int ll;
typedef unsigned long long ull;
#define endl '\n'

const int n = 100000;
bool isPrime[n + 1];

void sieveOfEratosthenes() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;

    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    ull ones(0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) ones++;
    }

    ull ans(0);
    if (ones >= 2) {
        sieveOfEratosthenes();
        for (int i = 0; i < n; i++)
            if (isPrime[a[i]])
                ans += (ones * (ones - 1)) / 2;  // number of ways to choose 2 ones from N ones is = N C 2 = (N*(N-1)) / 2
    }
    cout << ans << endl;
}

int main() {
    fastread();

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}