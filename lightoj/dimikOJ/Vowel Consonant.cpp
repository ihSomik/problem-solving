// https://dimikoj.com/problems/18/vowel-consonant
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  string s;
  getline(cin, s);

  for (int i = 0; s[i] != '\0'; i++)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      cout << s[i];
  cout << endl;

  for (int i = 0; s[i] != '\0'; i++)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u' || s[i] == ' ')
      continue;
    else
      cout << s[i];
  cout << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  cin.ignore();
  while (t--) solve();
}