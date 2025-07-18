class Solution {
 public:
  bool check(vector<int>& arr, int n, int k, int pages) {
    int sum(0), count = 1;
    for (int i = 0; i < n; i++) {
      if (sum + arr[i] <= pages)
        sum += arr[i];
      else {
        count++;
        sum = arr[i];
      }
    }

    return count <= k;
  }

  int findPages(vector<int>& arr, int k) {
    // code here
    int n = arr.size();
    if (k > n) return -1;
    int minPages = INT_MIN, maxPages(0);
    for (int a : arr) {
      minPages = max(minPages, a);
      maxPages += a;
    }

    int l = minPages, h = maxPages, ans = -1;
    ;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (check(arr, n, k, m)) {
        ans = m;
        h = m - 1;
      } else
        l = m + 1;
    }

    return ans;
  }
};