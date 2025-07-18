// https://dimikoj.com/problems/20/word-count-2
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  string s;
  cin.ignore();
  getline(cin, s);
  int len = s.length();

  int count = 1;
  for (int i = 0; i < len; i++)
    if (s[i] == ' ') count++;

  cout << "Count = " << count << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}