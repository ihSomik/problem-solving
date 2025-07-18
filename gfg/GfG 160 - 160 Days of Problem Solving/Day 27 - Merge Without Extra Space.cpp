class Solution {
 public:
  void mergeArrays(vector<int>& a, vector<int>& b) {
    // code here
    int n = a.size(), m = b.size();
    for (int i = m - 1; i >= 0; i--) {
      int last = a.back();

      if (last > b[i]) {
        int j = n - 2;
        while (j >= 0 && a[j] > b[i]) {
          a[j + 1] = a[j];
          j--;
        }
        a[j + 1] = b[i];
        b[i] = last;
      }
    }
  }
};