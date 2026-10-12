// https://projecteuler.net/problem=19
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define endl '\n'
typedef long long ll;

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
  int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int dayOfWeek = 1;  // 1 Jan 1900 is monday (0 = sunday)
  int sundayCount = 0;

  for (int year = 1900; year <= 2000; year++) {
    for (int month = 0; month < 12; month++) {
      if (year >= 1901 && dayOfWeek == 0)
        sundayCount++;  // 1st of month is sunday

      int daysInMonth = monthDays[month];
      if (month == 1 && isLeapYear(year)) daysInMonth = 29;

      dayOfWeek = (dayOfWeek + daysInMonth) % 7;  // first day of next month
    }
  }

  cout << sundayCount << endl;
}
