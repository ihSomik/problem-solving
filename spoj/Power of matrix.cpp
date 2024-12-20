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

const int M = 50;
ll mat[M][M], res[M][M];

void matrixMultiplication(ll matrixA[][M],
                          ll matrixB[][M], int m) {
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
    int m, n;
    cin >> m >> n;
    mat[m][m], res[m][m];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    // identity matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            if (i == j)
                res[i][j] = 1;
            else
                res[i][j] = 0;

    while (n) {
        if (n & 1) {
            matrixMultiplication(res, mat, m);
            n--;
        } else {
            matrixMultiplication(mat, mat, m);
            n /= 2;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
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
