// with extra space
class Solution {
 public:
  void mergeArrays(vector<int>& a, vector<int>& b) {
    // code here
    int n = a.size(), m = b.size();
    vector<int> temp;
    int i = 0, j = 0;
    while (i < n && j < m) {
      if (a[i] <= b[j])
        temp.push_back(a[i++]);
      else
        temp.push_back(b[j++]);
    }

    while (i < n) temp.push_back(a[i++]);
    while (j < m) temp.push_back(b[j++]);

    int k = 0;
    i = 0;
    while (i < n) a[i++] = temp[k++];
    i = 0;
    while (i < m) b[i++] = temp[k++];
  }
};