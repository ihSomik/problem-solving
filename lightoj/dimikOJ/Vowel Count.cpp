// https://dimikoj.com/problems/17/vowel-count
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long int ll;

void solve() {
  string s;
  getline(cin, s);
  int len = s.length();

  int count(0);
  for (int i = 0; i < len; i++)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      count++;

  cout << "Number of vowels = " << count << endl;
}

int main() {
  // fastread();
  int t = 1;
  cin >> t;
  cin.ignore();
  while (t--) solve();
}