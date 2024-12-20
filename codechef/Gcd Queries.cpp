// https://www.codechef.com/JAN15/problems/GCDQ
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

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void solve() {
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int pre[n + 1];
    int post[n + 2];

    pre[0] = 0;
    post[n + 1] = 0;
    for (int i = 1; i <= n; i++) pre[i] = gcd(pre[i - 1], a[i]);
    for (int i = n; i >= 1; i--) post[i] = gcd(post[i + 1], a[i]);

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << gcd(pre[l - 1], post[r + 1]) << endl;
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
