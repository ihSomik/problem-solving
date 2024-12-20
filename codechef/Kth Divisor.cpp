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

set<ll> s;

void solve() {
    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) {
            s.insert(i);
            s.insert(n / i);
        }

    vector<ll> v;
    v.assign(s.begin(), s.end());

    if (v.size() < k)
        cout << -1 << endl;
    else
        cout << v[k - 1] << endl;
}

int main() {
    fastread();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
