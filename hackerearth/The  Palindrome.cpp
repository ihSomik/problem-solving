#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    string revS = s;
    reverse(revS.begin(), revS.end());

    if (s == revS)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}