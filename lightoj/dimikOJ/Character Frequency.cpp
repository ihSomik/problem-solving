// https://dimikoj.com/problems/14/character-frequency
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
  char c;
  cin >> c;

  int count(0);
  for (int i = 0; i < len; i++)
    if (s[i] == c) count++;

  if (count)
    cout << "Occurrence of '" << c << "' in '" << s << "' = " << count << endl;
  else
    cout << "'" << c << "' is not present" << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  while (t--) solve();
}