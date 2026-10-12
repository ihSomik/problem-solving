// User function Template for C++

class Solution {
 public:
  vector<vector<string>> anagrams(vector<string>& arr) {
    // code here
    map<string, vector<string>> group;
    vector<vector<string>> result;

    for (string s : arr) {
      string k = s;
      sort(k.begin(), k.end());

      group[k].push_back(s);
    }

    for (auto pair : group) result.push_back(pair.second);

    return result;
  }
};