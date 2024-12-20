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

void solve() {
    int a, b;
    cin >> a >> b;

    if (a & 1 && b & 1)
        cout << "NO" << endl;
    else {
        if (!(a & 1) && !(b & 1))
            cout << "YES" << endl;
        else if (!(a & 1))
            if (a / 2 == b)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        else if (!(b & 1))
            if (b / 2 == a)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
    }
}

int main() {
    fastread();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();
}