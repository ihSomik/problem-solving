class Solution {
 public:
  vector<int> constructLPS(string s) {
    int n = s.length();
    vector<int> lps(n);

    int len = 0, i = 1;
    while (i < n) {
      if (s[i] == s[len]) {
        lps[i] = ++len;
        i++;
      } else {
        if (len == 0) {
          lps[i] = 0;
          i++;
        } else {
          len = lps[len - 1];
        }
      }
    }

    return lps;
  }

  string shortestPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    vector<int> lps =
        constructLPS(s + "$" + rev);  // wrong lps for "aaa" without "$"

    rev = s.substr(lps.back());
    reverse(rev.begin(), rev.end());
    return rev + s;
  }
};