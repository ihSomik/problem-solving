class Solution {
 public:
  int getSecondLargest(vector<int> &arr) {
    // code here
    int firstMax = -1, secMax = -1;
    for (auto a : arr)
      if (a > firstMax) firstMax = a;

    for (auto a : arr)
      if (a < firstMax && a > secMax) secMax = a;

    return secMax;
  }
};