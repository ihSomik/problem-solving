#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
  int original = num;
  int reversed = 0;

  while (num) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }

  return original == reversed;
}

int main() {
  int largestPalindrome = 0;

  for (int i = 999; i >= 100; i--) {
    for (int j = i; j >= 100; j--) {
      int product = i * j;

      if (isPalindrome(product) && product > largestPalindrome)
        largestPalindrome = product;
    }
  }

  cout << largestPalindrome << endl;
}
