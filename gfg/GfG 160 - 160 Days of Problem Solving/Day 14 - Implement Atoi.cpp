class Solution {
 public:
  int myAtoi(char *s) {
    // Your code here
    while (*s && isspace(*s)) s++;

    int sign = 1;
    if (*s == '+')
      s++;
    else if (*s == '-') {
      s++;
      sign = -1;
    }

    long long n = 0;
    while (*s && isdigit(*s)) {
      n = n * 10 + (*s - '0');
      s++;
    }

    n *= sign;

    if (n > INT_MAX)
      return INT_MAX;
    else if (n < INT_MIN)
      return INT_MIN;
    else
      return (int)n;
  }
};