class Solution {
 public:
  void constructLps(string &pat, vector<int> &lps) {
    int len = 0, i = 1;
    lps[0] = 0;
    int m = pat.length();

    while (i < m) {
      if (pat[i] == pat[len]) {
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
  }

  int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    vector<int> lps(m);
    constructLps(needle, lps);

    int i = 0, j = 0;
    while (i < n) {
      if (haystack[i] == needle[j]) {
        i++;
        j++;
        if (j == m) return i - j;
      } else {
        if (j != 0)
          j = lps[j - 1];
        else
          i++;
      }
    }

    return -1;
  }
};
