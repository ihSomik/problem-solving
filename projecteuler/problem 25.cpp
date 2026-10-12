// https://projecteuler.net/problem=25
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

string add(string a, string b) {
  string res = "";
  int carry = 0;
  int n = max(a.length(), b.length());
  for (int i = 0; i < n; i++) {
    int digA = (i < a.length()) ? a[a.length() - 1 - i] - '0' : 0;
    int digB = (i < b.length()) ? b[b.length() - 1 - i] - '0' : 0;
    int sum = digA + digB + carry;
    res = char((sum % 10) + '0') + res;
    carry = sum / 10;
  }
  if (carry) res = char(carry + '0') + res;

  return res;
}

int main() {
  fastread();

  string a = "1", b = "1";
  int n = 2;

  while (b.length() < 1000) {
    string next = add(a, b);
    a = b;
    b = next;
    n++;
  }
  cout << n << endl;
}
