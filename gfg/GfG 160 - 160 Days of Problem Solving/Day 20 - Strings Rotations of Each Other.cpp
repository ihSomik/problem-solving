class Solution {
 public:
  vector<int> constructLPS(string &pat) {
    int m = pat.length();
    vector<int> lps(m);
    lps[0] = 0;
    int len = 0, i = 1;

    while (i < m) {
      if (pat[i] == pat[len]) {
        lps[i] = ++len;
        i++;
      } else if (len == 0) {
        lps[i] = 0;
        i++;
      } else
        len = lps[len - 1];
    }

    return lps;
  }

  bool areRotations(string &s1, string &s2) {
    // Your code here
    string txt = s1 + s1, pat = s2;
    vector<int> lps = constructLPS(pat);
    int n = txt.length(), m = pat.length();
    int i = 0, j = 0;

    while (i < n) {
      if (txt[i] == pat[j]) {
        i++;
        j++;

        if (j == m) return true;
      } else {
        if (j == 0)
          i++;
        else
          j = lps[j - 1];
      }
    }

    return false;
  }
};