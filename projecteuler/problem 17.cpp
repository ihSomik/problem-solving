// https://projecteuler.net/problem=17
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

#include <iostream>
#include <vector>
using namespace std;

const vector<string> ones = {"",     "one", "two",   "three", "four",
                             "five", "six", "seven", "eight", "nine"};
const vector<string> teens = {"ten",      "eleven",  "twelve",  "thirteen",
                              "fourteen", "fifteen", "sixteen", "seventeen",
                              "eighteen", "nineteen"};
const vector<string> tens = {"",      "",      "twenty",  "thirty", "forty",
                             "fifty", "sixty", "seventy", "eighty", "ninety"};

long long countLetters(int n) {
  long long count = 0;

  if (n == 1000) return 11;  // "one thousand"

  if (n >= 100) {
    count += ones[n / 100].size() + 7;  // "hundred"
    n %= 100;
    if (n > 0) count += 3;  // "and"
  }

  if (n >= 20) {
    count += tens[n / 10].size();
    n %= 10;
  }

  if (n >= 10 && n <= 19) {
    count += teens[n - 10].size();
    return count;
  }

  if (n > 0) count += ones[n].size();

  return count;
}

int main() {
  long long totalLetters = 0;
  for (int i = 1; i <= 1000; i++) totalLetters += countLetters(i);

  cout << totalLetters << endl;
}
