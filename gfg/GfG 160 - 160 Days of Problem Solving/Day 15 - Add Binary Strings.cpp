// User function template for C++
class Solution {
 public:
  string addBinary(string& s1, string& s2) {
    // your code here
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int carry = 0;
    string ans;

    while (i >= 0 or j >= 0 || carry) {
      int bit1 = (i >= 0) ? s1[i] - '0' : 0;
      int bit2 = (j >= 0) ? s2[j] - '0' : 0;

      int sum = (bit1 + bit2 + carry) % 2;
      carry = (bit1 + bit2 + carry) / 2;
      ans += sum + '0';

      i--;
      j--;
    }

    reverse(ans.begin(), ans.end());

    while (ans.size() > 1 && ans[0] == '0') ans.erase(0, 1);

    return ans;
  }
};