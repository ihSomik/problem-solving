class Solution {
 public:
  int kthElement(vector<int>& a, vector<int>& b, int k) {
    // code here
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<int> temp;
    while (i < n && j < m)
      if (a[i] <= b[j])
        temp.push_back(a[i++]);
      else
        temp.push_back(b[j++]);

    while (i < n) temp.push_back(a[i++]);
    while (j < m) temp.push_back(b[j++]);

    return temp[k - 1];
  }
};