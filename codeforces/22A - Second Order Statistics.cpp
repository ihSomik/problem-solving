#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  fastread();
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for (int i = 1; i < n; i++)
    if (a[i] != a[i - 1]) {
      cout << a[i] << endl;
      return 0;
    }

  cout << "NO" << endl;
}