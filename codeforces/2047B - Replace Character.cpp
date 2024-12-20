#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  unordered_map<char, int> freq;
  for (char c : s) freq[c]++;

  char max_freq_char = s[0];
  int maxFreq = freq[max_freq_char];
  for (auto& pair : freq) {
    if (pair.second > maxFreq) {
      max_freq_char = pair.first;
      maxFreq = pair.second;
    }
  }

  char min_freq_char = s[0];
  int minFreq = INT_MAX;
  for (auto& pair : freq) {
    if (pair.second < minFreq) {
      min_freq_char = pair.first;
      minFreq = pair.second;
    }
  }

  if (minFreq == maxFreq) {
    for (int j = 0; j < n; j++) {
      if (s[j] != max_freq_char) {
        s[j] = max_freq_char;
        break;
      }
    }
  } else {
    for (int j = 0; j < n; j++) {
      if (s[j] == min_freq_char) {
        s[j] = max_freq_char;
        break;
      }
    }
  }

  cout << s << endl;
}

int main() {
  fastread();
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
