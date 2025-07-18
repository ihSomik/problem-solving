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

  int minChar(string& s) {
    // Write your code here
    string rs = s;
    reverse(rs.begin(), rs.end());
    vector<int> lps =
        constructLPS(s + "$" + rs);  // wrong lps for "aaa" without "$"

    return s.length() - lps.back();
  }
};
