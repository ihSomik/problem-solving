class Solution {
 public:
  bool areAnagrams(string& s1, string& s2) {
    // code here
    vector<int> freq(26, 0);

    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;

    for (int f : freq)
      if (f) return false;

    return true;
  }
};