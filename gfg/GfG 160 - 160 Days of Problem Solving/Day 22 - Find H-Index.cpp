// User function Template for C++
class Solution {
 public:
  // Function to find hIndex
  int hIndex(vector<int>& citations) {
    // code here
    sort(citations.rbegin(), citations.rend());

    int cnt(0);
    for (int c : citations)
      if (c >= cnt + 1)
        cnt++;
      else
        break;

    return cnt;
  }
};
