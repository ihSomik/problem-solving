// https://dimikoj.com/problems/8/small-to-large
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'

int main() {
  fastread();

  int t = 1;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case " << i << ": ";

    int a[3];
    for (int i = 0; i < 3; i++) cin >> a[i];

    sort(a, a + 3);

    for (int i = 0; i < 2; i++) cout << a[i] << ' ';
    cout << a[2];

    cout << endl;
  }
}