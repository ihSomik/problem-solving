#include <bits/stdc++.h>
using namespace std;

int distance(char a, char b) { return min(abs(a - b), 5 - abs(a - b)); }

int main() {
  char a, b, c, d;
  cin >> a >> b >> c >> d;

  if (distance(a, b) == distance(c, d))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
