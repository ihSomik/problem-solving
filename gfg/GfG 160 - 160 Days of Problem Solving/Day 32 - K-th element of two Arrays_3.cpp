class Solution {
 public:
  int kthElement(vector<int>& a, vector<int>& b, int k) {
    // code here
    int n = a.size(), m = b.size(), i = a.size() - 1, j = 0;

    while (i >= 0 && j < m) {
      if (a[i] > b[j]) swap(a[i], b[j]);
      i--;
      j++;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (k <= n)
      return a[k - 1];
    else
      return b[k - n - 1];
  }
};