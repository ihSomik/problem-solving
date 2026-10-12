class Solution {
 public:
  vector<int> findUnion(vector<int>& a, vector<int>& b) {
    // code here
    unordered_set<int> result;
    for (int t : a) result.insert(t);
    for (int t : b) result.insert(t);

    return vector<int>(result.begin(), result.end());
  }
};