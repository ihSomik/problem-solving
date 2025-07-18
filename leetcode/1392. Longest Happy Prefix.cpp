class Solution {
 public:
  string longestPrefix(string s) {
    int n = s.length();
    int len = 0, i = 1;
    vector<int> lps(n);

    while (i < n) {
      if (s[i] == s[len]) {
        lps[i] = ++len;
        i++;
      } else {
        if (len != 0)
          len = lps[len - 1];
        else {
          lps[i] = 0;
          i++;
        }
      }
    }

    return s.substr(0, lps[n - 1]);
  }
};