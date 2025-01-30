typedef long long ll;
class Solution {
 public:
  ll minCost(vector<int>& arr, vector<int>& brr, ll k) {
    int n = arr.size();

    ll tc1 = 0;
    for (int i = 0; i < n; i++) tc1 += abs(arr[i] - brr[i]);
    if (tc1 == 0) return 0;

    ll tc2 = k;
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    for (int i = 0; i < n; i++) tc2 += abs(arr[i] - brr[i]);

    return min(tc1, tc2);
  }
};
©leetcode