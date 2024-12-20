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
    char fir, sec, thi;
    if (n < 28) {
        fir = 'a';
        sec = 'a';
        thi = 'a' + (n - 3);
    } else {
        thi = 'z';
        n -= 26;
        if (n < 27) {
            fir = 'a';
            sec = 'a' + (n - 2);
        } else {
            sec = 'z';
            n -= 26;
            fir = 'a' + (n - 1);
        }
    }
    cout << fir << sec << thi << endl;
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