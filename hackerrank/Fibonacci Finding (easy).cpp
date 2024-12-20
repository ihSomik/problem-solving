#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
#define sq(x) (x) * (x)
#define all(x) x.begin(), x.end()
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

const int N = 2;
ll res[N][N], t[N][N];

void matrixMulti(ll matrixA[][N],
                 ll matrixB[][N], int m) {
    ll result[m][m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < m; ++k) {
                ll temp = (matrixA[i][k] * matrixB[k][j]) % MOD;
                result[i][j] = (result[i][j] + temp) % MOD;
            }
        }
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            matrixA[i][j] = result[i][j];
}

void solve() {
    int a, b, n;
    cin >> a >> b >> n;

    if (n == 0) {
        cout << a << endl;
        return;
    } else if (n == 1) {
        cout << b << endl;
        return;
    }

    // identity matrix
    res[0][0] = res[1][1] = 1;
    res[0][1] = res[1][0] = 0;

    /*0 1
      1 1*/
    t[0][0] = 0;
    t[0][1] = t[1][0] = t[1][1] = 1;

    n--;
    while (n) {
        if (n & 1) {
            matrixMulti(res, t, 2);
            n--;
        } else {
            matrixMulti(t, t, 2);
            n /= 2;
        }
    }

    cout << (a * res[0][1] + b * res[1][1]) % MOD << endl;
}

int main() {
    fastread();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
