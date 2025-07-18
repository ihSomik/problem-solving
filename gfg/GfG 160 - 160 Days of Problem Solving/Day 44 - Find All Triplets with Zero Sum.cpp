// User function Template for C++
class Solution {
 public:
  vector<vector<int>> findTriplets(vector<int> &arr) {
    int n = arr.size();
    unordered_map<int, vector<int>> valIndx;  // value-indexes pair
    vector<vector<int>> triplets;

    for (int j = 0; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int val = -1 * (arr[j] + arr[k]);

        if (valIndx.find(val) != valIndx.end())
          for (int i : valIndx[val]) triplets.push_back({i, j, k});
      }
      valIndx[arr[j]].push_back(j);
    }

    return triplets;
  }
};