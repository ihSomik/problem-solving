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

bool isVowel(int c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;

    return false;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    if (n <= 3) {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (i + 2 == n - 1 and !isVowel(s[i]) and isVowel(s[i + 1]) and !isVowel(s[i + 2])) {
            cout << s[i] << s[i + 1] << s[i + 2];
            i += 2;
        } else if (i + 1 == n - 1 and !isVowel(s[i]) and isVowel(s[i + 1])) {
            cout << s[i] << s[i + 1];
            i++;
        } else if (i + 3 < n - 1 and !isVowel(s[i]) and isVowel(s[i + 1]) and !isVowel(s[i + 2]) and !isVowel(s[i + 3])) {
            cout << s[i] << s[i + 1] << s[i + 2] << '.';
            i += 2;
        } else {
            cout << s[i] << s[i + 1] << '.';
            i++;
        }
    }
    cout << endl;
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
