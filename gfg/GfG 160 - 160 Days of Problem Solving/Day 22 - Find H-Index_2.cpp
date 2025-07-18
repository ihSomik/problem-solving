// User function Template for C++
class Solution {
 public:
  // Function to find hIndex
  int hIndex(vector<int>& citations) {
    // code here
    int n = citations.size();

    vector<int> freq(n + 1,
                     0);  // freq[i] = number of papers with exactly i citations

    for (int c : citations) {
      if (c >= n)
        freq[n]++;
      else
        freq[c]++;
    }

    int totalPaper(0);
    for (int i = n; i >= 0; i--) {
      totalPaper += freq[i];
      if (totalPaper >= i) return i;
    }
    return 0;
  }
};
