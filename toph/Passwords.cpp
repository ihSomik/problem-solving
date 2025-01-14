#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while (cin >> s) {
    int count = 0;
    bool hasLower, hasUpper, hasDigit;
    hasLower = hasUpper = hasDigit = false;

    for (int i = 0; i < s.length(); i++) {
      if (islower(s[i]))
        hasLower = true;
      else if (isupper(s[i]))
        hasUpper = true;
      else if (isdigit(s[i]))
        hasDigit = true;

      if (hasLower && hasUpper && hasDigit) {
        count++;
        hasLower = hasUpper = hasDigit = false;
      }
    }
    cout << count << endl;
  }
  return 0;
}
