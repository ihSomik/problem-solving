// got tle
class Solution {
 public:
  bool areRotations(string &s1, string &s2) {
    // Your code here
    s1 = s1 + s1;
    if (s1.find(s2) != string::npos)
      return true;
    else
      return false;
  }
};