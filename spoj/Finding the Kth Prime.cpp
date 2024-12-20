#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
#define PI acos(-1);
#define INF 1e9
#define EPS 1e-9
#define MOD 1000000007
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef long long int ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pi;

int n = 1e8;
vector<bool> isPrime(n, true);
vector<int> primeNums;

void sieve() {
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;

    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            primeNums.push_back(i);
}

int main() {
    fastread();

    sieve();
    int q;
    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        cout << primeNums[k - 1] << endl;
    }
}
