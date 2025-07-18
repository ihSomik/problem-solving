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

  bool kmpSearch(string &txt, string &pat) {
    int n = txt.length();
    int m = pat.length();
    vector<int> lps(m);
    constructLps(pat, lps);

    int i = 0, j = 0;
    while (i < n) {
      if (txt[i] == pat[j]) {
        i++;
        j++;
        if (j == m) return true;
      } else {
        if (j != 0)
          j = lps[j - 1];
        else
          i++;
      }
    }
    return false;
  }

  int repeatedStringMatch(string a, string b) {
    string txt = a;
    int count = 1;

    while (txt.length() < b.length()) {
      txt += a;
      count++;
    }

    if (kmpSearch(txt, b)) return count;

    txt += a;
    if (kmpSearch(txt, b)) return count + 1;

    return -1;
  }
};
