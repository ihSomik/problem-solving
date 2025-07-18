class Solution {
 public:
  int kthElement(vector<int>& a, vector<int>& b, int k) {
    // code here
    int n = a.size(), m = b.size(), i = 0, j = 0, x = 0;
    while (i < n && j < m) {
      x++;
      if (a[i] <= b[j]) {
        if (x == k) return a[i];
        i++;
      } else {
        if (x == k) return b[j];
        j++;
      }
    }

    while (i < n) {
      x++;
      ;
      if (x == k) return a[i];
      i++;
    }
    while (j < m) {
      x++;
      if (x == k) return b[j];
      j++;
    }
  }
};