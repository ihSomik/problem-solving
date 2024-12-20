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

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int lc = 1, i, j;
    for (i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            lc++;
        else
            break;
    }
    for (j = n - 1; j > i; j--) {
        if (a[j] == a[0])
            lc++;
        else
            break;
    }

    reverse(a, a + n);

    int rc = 1;
    for (i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            rc++;
        else
            break;
    }
    for (j = n - 1; j > i; j--) {
        if (a[j] == a[0])
            rc++;
        else
            break;
    }

    int bc = max(lc, rc);
    cout << n - bc << endl;
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