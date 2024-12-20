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
    int n = 3;
    int press[n][n], currState[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            currState[i][j] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            press[i][j] = temp % 2;

            if (press[i][j] == 1) {
                currState[i][j] = !(currState[i][j]);
                if (i != 0)
                    currState[i - 1][j] = !(currState[i - 1][j]);
                if (i != 2)
                    currState[i + 1][j] = !(currState[i + 1][j]);
                if (j != 0)
                    currState[i][j - 1] = !(currState[i][j - 1]);
                if (j != 2)
                    currState[i][j + 1] = !(currState[i][j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << currState[i][j];
        }
        cout << endl;
    }
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
