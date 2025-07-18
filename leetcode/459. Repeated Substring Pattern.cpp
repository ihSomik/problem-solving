class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    int n = s.size();
    vector<int> lps(n, 0);
    int len = 0, i = 1;

    // construct lps array
    while (i < n) {
      if (s[i] == s[len]) {
        lps[i++] = ++len;
      } else {
        if (len != 0)
          len = lps[len - 1];
        else
          lps[i++] = 0;
      }
    }

    int longestPrefixSuffix = lps[n - 1];

    // check if the repeating unit length divides the full string length
    return longestPrefixSuffix > 0 && n % (n - longestPrefixSuffix) == 0;
  }
};
