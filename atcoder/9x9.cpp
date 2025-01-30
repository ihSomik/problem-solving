#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int first_digit = S[0] - '0';
  int second_digit = S[2] - '0';

  int product = first_digit * second_digit;

  cout << product << endl;

  return 0;
}
