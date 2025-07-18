class Solution {
 public:
  int majorityElement(vector<int>& arr) {
    // Boyer-Moore Voting Algorithm
    int n = arr.size();
    int candidate = -1, count = 0;

    for (int a : arr) {
      if (a == candidate)
        count++;
      else if (count == 0) {
        candidate = a;
        count++;
      } else
        count--;
    }

    count = 0;

    for (int a : arr)
      if (a == candidate) count++;

    if (count > n / 2)
      return candidate;
    else
      return -1;
  }
};