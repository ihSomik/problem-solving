class Solution {
 public:
  vector<int> intersect(vector<int>& a, vector<int>& b) {
    // code here
    unordered_set<int> setB(b.begin(), b.end());
    unordered_set<int> result;

    for (int t : a)
      if (setB.find(t) != setB.end()) result.insert(t);

    return vector<int>(result.begin(), result.end());
  }
};