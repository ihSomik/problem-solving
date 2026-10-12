class Solution {
 public:
  long subarrayXor(vector<int> &arr, int k) {
    // code here
    unordered_map<int, int> preXorFreq; // frequency of prefix XORs
    preXorFreq[0] = 1; // base case: xor of empty subarray is 0
    long long currXor(0), cnt(0);

    for (int num : arr) {
      currXor ^= num;
      cnt += preXorFreq[currXor ^ k]; // if a^b = k, then a = k^b
      preXorFreq[currXor]++;
    }

    return cnt;
  }
};