class Solution {
 public:
  vector<int> findMajority(vector<int>& arr) {
    // Code here
    int n = arr.size();
    unordered_map<int, int> freq;
    vector<int> v;

    for (int a : arr) freq[a]++;

    for (auto f : freq)
      if (f.second > n / 3) v.push_back(f.first);

    sort(v.begin(), v.end());
    return v;
  }
};