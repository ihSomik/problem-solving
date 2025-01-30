#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

const int N = 201;
int n, q, d, m;
int num[N];
int memo[N][21][11];

int solve(int i, int rem, int cnt) {
  if (i == n + 1 || cnt == m) return (rem == 0 && cnt == m);

  if (memo[i][rem][cnt] != -1) return memo[i][rem][cnt];

  int r = ((rem + num[i]) % d + d) % d;

  int include = solve(i + 1, r, cnt + 1);  // include num[i]
  int exclude = solve(i + 1, rem, cnt);    // exclude num[i]

  return memo[i][rem][cnt] = include + exclude;
}

int main() {
  fastread();

  int set = 1;

  while (cin >> n >> q && (n || q)) {
    for (int i = 1; i <= n; i++) cin >> num[i];

    cout << "SET " << set++ << ":" << endl;

    for (int qn = 1; qn <= q; qn++) {
      memset(memo, -1, sizeof(memo));
      cin >> d >> m;

      cout << "QUERY " << qn << ": " << solve(1, 0, 0) << endl;
    }
  }

  return 0;
}
