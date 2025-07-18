class Solution {
 public:
  string removeOccurrences(string s, string part) {
    int pos = s.find(part);
    int m = part.length();
    while (pos != string::npos) {
      s.erase(pos, m);
      pos = s.find(part);
    }
    return s;
  }
};
